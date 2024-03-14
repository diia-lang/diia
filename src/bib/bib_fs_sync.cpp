#include <dlfcn.h>
#include "../../include/mavka_api_v0.h"
#include "../mavka.h"

namespace mavka {
  MaValue BibFsSyncReadNativeFn(MaMa* M,
                                MaObject* native_o,
                                MaArgs* args,
                                const MaLocation& location) {
    const auto path = args->Get(0, "шлях");
    if (path.IsObject() && (path.IsObjectText())) {
      const auto path_str = path.AsText()->data;
      std::ifstream file(path_str);
      if (file.is_open()) {
        std::vector<uint8_t> data((std::istreambuf_iterator<char>(file)),
                                  std::istreambuf_iterator<char>());
        return MaValue::Object(MaBytes::Create(M, data));
      }
      return MaValue::Error(MaError::Create(
          M, "Не вдалося прочитати файл \"" + path_str + "\".", location));
    }
    return MaValue::Error(
        MaError::Create(M, "Очікується що шлях буде текстом.", location));
  }

  MaValue BibFsSyncReadTextNativeFn(MaMa* M,
                                    MaObject* native_o,
                                    MaArgs* args,
                                    const MaLocation& location) {
    const auto path = args->Get(0, "шлях");
    if (path.IsObject() && (path.IsObjectText())) {
      const auto path_str = path.AsText()->data;
      std::ifstream file(path_str);
      if (file.is_open()) {
        std::string text((std::istreambuf_iterator<char>(file)),
                         std::istreambuf_iterator<char>());
        return MaValue::Object(MaText::Create(M, text));
      }
      return MaValue::Error(MaError::Create(
          M, "Не вдалося прочитати файл \"" + path_str + "\".", location));
    }
    return MaValue::Error(
        MaError::Create(M, "Очікується що шлях буде текстом.", location));
  }

  // взяти біб сфс
  MaObject* BibInitFsSyncModule(MaMa* M) {
    const auto mavka_module_o = MaModule::Create(M, "сфс");
    mavka_module_o->SetProperty(
        M, "прочитати",
        MaNative::Create(M, "прочитати", BibFsSyncReadNativeFn, nullptr));
    mavka_module_o->SetProperty(
        M, "прочитати_текст",
        MaNative::Create(M, "прочитати_текст", BibFsSyncReadTextNativeFn,
                         nullptr));
    return mavka_module_o;
  }
} // namespace mavka