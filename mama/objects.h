#ifndef OBJECTS_H
#define OBJECTS_H

class MaString;
class MaList;
class MaDict;
class MaDiia;
class MaStructure;
class MaDiiaNative;
struct MaCell;

struct MaObject {
  unsigned char type;
  union {
    MaString* string;
    MaList* list;
    MaDict* dict;
    MaDiia* diia;
    MaStructure* structure;
    MaDiiaNative* diia_native;
  } d;
  MaObject* structure;
  tsl::ordered_map<std::string, MaCell> properties;
  std::function<void(MaObject* me, const std::string& name, MaCell value)> set;
  std::function<MaCell(MaObject* me, const std::string& name)> get;
};

union MaCellV {
  MaObject* object;
  double number;
};

struct MaCell {
  unsigned char type;
  MaCellV v;
};

class MaString final {
 public:
  std::string data;

  size_t length() const;
};

class MaList final {
 public:
  std::vector<MaCell> data;

  void append(MaCell cell);
  void set(size_t index, MaCell cell);
  MaCell get(size_t index) const;
  size_t size() const;
  bool contains(MaCell cell);
};

class MaDict final {
 public:
  std::vector<std::pair<MaCell, MaCell>> data;

  void set(MaCell key, MaCell value);
  MaCell get(MaCell key) const;
  void remove(MaCell key);
  size_t size() const;
};

class MaDiiaParam final {
 public:
  std::string name;
  MaCell default_value;
};

class MaDiia final {
 public:
  int index;
  MaObject* me;
  MaScope* scope;
  std::vector<MaDiiaParam> params;
};

class MaStructure final {
 public:
  std::vector<MaDiiaParam> params;
  std::vector<MaObject*> methods;
};

typedef MaCell DiiaNativeFn(MaMa* M,
                            MaObject* me,
                            std::map<std::string, MaCell>& args);

class MaDiiaNative final {
 public:
  std::function<DiiaNativeFn> fn;
  MaObject* me;
};

inline std::string ma_number_to_string(const double number) {
  std::ostringstream stream;
  stream << number;
  return stream.str();
}

inline void ma_object_set(MaObject* object,
                          const std::string& name,
                          MaCell value) {
  object->properties.insert_or_assign(name, value);
}

inline MaCell ma_object_get(const MaObject* object, const std::string& name) {
  if (object->properties.contains(name)) {
    return object->properties.at(name);
  }
  return MA_MAKE_EMPTY();
}

inline bool ma_object_has(const MaObject* object, const std::string& name) {
  return object->properties.contains(name);
}

inline MaCell create_empty_object() {
  const auto ma_object = new MaObject();
  const auto object_cell = MaCell{MA_CELL_OBJECT, {.object = ma_object}};
  return object_cell;
}

inline MaCell create_diia_native(
    const std::function<DiiaNativeFn>& diia_native_fn) {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_DIIA_NATIVE;
  const auto ma_diia_native = new MaDiiaNative();
  ma_diia_native->fn = diia_native_fn;
  ma_object->d.diia_native = ma_diia_native;
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

inline MaCell create_diia_native(
    const std::function<DiiaNativeFn>& diia_native_fn,
    MaObject* me) {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_DIIA_NATIVE;
  const auto ma_diia_native = new MaDiiaNative();
  ma_diia_native->fn = diia_native_fn;
  ma_diia_native->me = me;
  ma_object->d.diia_native = ma_diia_native;
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

MaCell ma_string_mag_add_diia_native_fn(MaMa* M,
                                        MaObject* me,
                                        std::map<std::string, MaCell>& args);
MaCell ma_string_mag_get_element_diia_native_fn(
    MaMa* M,
    MaObject* me,
    std::map<std::string, MaCell>& args);

inline MaCell create_string(const std::string& value) {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_STRING;
  const auto ma_string = new MaString();
  ma_string->data = value;
  ma_object->d.string = ma_string;
  ma_object->get = [](MaObject* me, const std::string& name) {
    if (name == "довжина") {
      return MA_MAKE_INTEGER(me->d.string->length());
    }
    return ma_object_get(me, name);
  };
  ma_object_set(
      ma_object, MAG_ADD,
      create_diia_native(ma_string_mag_add_diia_native_fn, ma_object));
  ma_object_set(
      ma_object, MAG_GET_ELEMENT,
      create_diia_native(ma_string_mag_get_element_diia_native_fn, ma_object));
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

MaCell ma_list_iterate_diia_native_fn(MaMa* M,
                                      MaObject* list_me,
                                      std::map<std::string, MaCell>& args);
MaCell ma_list_get_element_diia_native_fn(MaMa* M,
                                          MaObject* list_me,
                                          std::map<std::string, MaCell>& args);
MaCell ma_list_set_element_diia_native_fn(MaMa* M,
                                          MaObject* list_me,
                                          std::map<std::string, MaCell>& args);
MaCell ma_list_append_diia_native_fn(MaMa* M,
                                     MaObject* list_me,
                                     std::map<std::string, MaCell>& args);
MaCell ma_list_contains_diia_native_fn(MaMa* M,
                                       MaObject* list_me,
                                       std::map<std::string, MaCell>& args);

inline MaCell create_list() {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_LIST;
  const auto ma_list = new MaList();
  ma_object->d.list = ma_list;
  ma_object->get = [](MaObject* me, const std::string& name) {
    if (name == "довжина") {
      return MA_MAKE_INTEGER(me->d.list->size());
    }
    return ma_object_get(me, name);
  };
  ma_object_set(ma_object, MAG_ITERATOR,
                create_diia_native(ma_list_iterate_diia_native_fn, ma_object));
  ma_object_set(
      ma_object, MAG_GET_ELEMENT,
      create_diia_native(ma_list_get_element_diia_native_fn, ma_object));
  ma_object_set(
      ma_object, MAG_SET_ELEMENT,
      create_diia_native(ma_list_set_element_diia_native_fn, ma_object));
  ma_object_set(ma_object, "додати",
                create_diia_native(ma_list_append_diia_native_fn, ma_object));
  ma_object_set(ma_object, MAG_CONTAINS,
                create_diia_native(ma_list_contains_diia_native_fn, ma_object));
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

inline MaCell create_dict() {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_DICT;
  const auto ma_dict = new MaDict();
  ma_object->d.dict = ma_dict;
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

inline MaCell create_diia(const int& index) {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_DIIA;
  const auto ma_diia = new MaDiia();
  ma_diia->index = index;
  ma_object->d.diia = ma_diia;
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

inline MaObject* bind_diia(MaObject* diia, MaObject* object) {
  const auto new_ma_diia = new MaDiia();
  new_ma_diia->index = diia->d.diia->index;
  new_ma_diia->me = object;
  new_ma_diia->scope = diia->d.diia->scope;
  new_ma_diia->params = diia->d.diia->params;
  const auto new_diia_object = new MaObject();
  new_diia_object->type = MA_OBJECT_DIIA;
  new_diia_object->d.diia = new_ma_diia;
  return new_diia_object;
}

inline MaCell create_object(MaObject* ma_structure_object) {
  const auto ma_object = new MaObject();
  const auto object_cell = MaCell{MA_CELL_OBJECT, {.object = ma_object}};
  ma_object->structure = ma_structure_object;
  for (const auto& method : ma_structure_object->d.structure->methods) {
    const auto diia_name =
        ma_object_get(method, "назва").v.object->d.string->data;
    const auto bound_diia = bind_diia(method, ma_object);
    ma_object_set(ma_object, diia_name,
                  MaCell{MA_CELL_OBJECT, {.object = bound_diia}});
  }
  return object_cell;
}

inline MaCell create_structure(const std::string& name) {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_STRUCTURE;
  const auto ma_structure = new MaStructure();
  ma_object->d.structure = ma_structure;
  ma_object_set(ma_object, "назва", create_string(name));
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

inline MaCell create_module(const std::string& name) {
  const auto ma_object = new MaObject();
  ma_object->type = MA_OBJECT_MODULE;
  const auto ma_structure = new MaStructure();
  ma_object->d.structure = ma_structure;
  ma_object_set(ma_object, "назва", create_string(name));
  return MaCell{MA_CELL_OBJECT, {.object = ma_object}};
}

#endif // OBJECTS_H
