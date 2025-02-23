#if defined(__linux__)
#include <dlfcn.h>
#endif
#include <cmath>
#include <codecvt>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <iostream>
#include <locale>

#define п8 uint8_t
#define п16 uint16_t
#define п32 uint32_t
#define п64 uint64_t
#define ц8 int8_t
#define ц16 int16_t
#define ц32 int32_t
#define ц64 int64_t
#define д32 float
#define д64 double
#define логічне uint8_t
#define позитивне п64
#define ціле ц64
#define дійсне д64
#define ніщо void
#define невідома_адреса void*
#define невідома_памʼять void*
#define памʼять_п8 п8*
#define адреса_памʼять_п8 п8**
#define адреса_позитивне позитивне*
#define так true
#define ні false
#define пусто nullptr

extern "C" логічне мавка_система_фс_прочитати_файл(
    памʼять_п8 шлях,
    позитивне розмір_шляху,
    адреса_памʼять_п8 вихід,
    адреса_позитивне вихід_розміру) {
  char* path =
      strdup(std::string(reinterpret_cast<char*>(шлях), розмір_шляху).c_str());
  FILE* file = fopen(path, "rb");
  free(path);
  if (file == nullptr) {
    return false;
  }
  fseek(file, 0, SEEK_END);
  auto length = ftell(file);
  fseek(file, 0, SEEK_SET);
  auto buffer = (char*)malloc(length);
  fread(buffer, 1, length, file);
  fclose(file);
  *вихід = reinterpret_cast<памʼять_п8>(buffer);
  *вихід_розміру = length;
  return true;
}

extern "C" логічне мавка_система_фс_виправити_шлях_та_зробити_абсолютним(
    памʼять_п8 шлях,
    позитивне розмір_шляху,
    адреса_памʼять_п8 вихід,
    адреса_позитивне вихід_розміру) {
  std::string path(reinterpret_cast<char*>(шлях), розмір_шляху);
  std::filesystem::path p(path);
  std::string fp = absolute(weakly_canonical(p)).string();
  *вихід = reinterpret_cast<памʼять_п8>(strdup(fp.c_str()));
  *вихід_розміру = fp.size();
  return true;
}

extern "C" логічне мавка_система_фс_отримати_назву_файла_без_розширення(
    памʼять_п8 шлях,
    позитивне розмір_шляху,
    адреса_памʼять_п8 вихід,
    адреса_позитивне вихід_розміру) {
  std::string path(reinterpret_cast<char*>(шлях), розмір_шляху);
  std::filesystem::path p(path);
  std::string value = p.filename().stem().string();
  *вихід = reinterpret_cast<памʼять_п8>(strdup(value.c_str()));
  *вихід_розміру = value.size();
  return true;
}

extern "C" uint64_t mavka_read_from_stdin(char* prefix,
                                          size_t prefix_size,
                                          char** output) {
  std::cout << std::string(prefix, prefix_size);
  std::string line;
  if (std::cin.eof()) {
    return 0;
  }
  std::getline(std::cin, line);
  *output = strdup(line.c_str());
  return line.size();
}

extern "C" {
#include <stdlib.h>
#if MAVKA_READLINE == 1
#include <readline/readline.h>

char* _mavka_readline(char* prefix) {
  return readline(prefix);
}
#else
char* _mavka_readline(char* prefix) {
  std::cout << prefix;
  std::string line;
  if (std::cin.eof()) {
    return nullptr;
  }
  std::getline(std::cin, line);
  return strdup(line.c_str());
}
#endif

void _mavka_readline_init() {
  //
}

ніщо мавка_система_запустити_діалог(
    невідома_адреса дані,
    ніщо (*обробник)(невідома_адреса дані,
                     памʼять_п8 значення,
                     позитивне розмір_значення)) {
  _mavka_readline_init();
  char* input;
  char* prefix = strdup("- ");
read:
  input = _mavka_readline(prefix);
  if (input == nullptr) {
    goto out;
  }
  обробник(дані, reinterpret_cast<памʼять_п8>(input), strlen(input));
  free(input);
  goto read;
out:
  free(prefix);
}
}

extern "C" size_t mavka_get_path_directory(unsigned char* path,
                                           unsigned char** output) {
  std::string str = (char*)path;
  std::filesystem::path p(str);
  *output = (unsigned char*)strdup(p.parent_path().string().c_str());
  return strlen((char*)*output);
}

extern "C" void* mavka_load_shared_object_function_ptr_from_file(
    char* path,
    size_t path_size,
    unsigned char* name) {
#if defined(__linux__)
  void* dobject = dlopen(std::string(path, path_size).c_str(), RTLD_LAZY);
  if (dobject == nullptr) {
    if (auto err = dlerror()) {
      std::cout << err << std::endl;
    }
    return nullptr;
  }
  void* extfptr = dlsym(dobject, (char*)name);
  if (extfptr == nullptr) {
    if (auto err = dlerror()) {
      std::cout << err << std::endl;
    }
    return nullptr;
  }
  return extfptr;
#else
  return nullptr;
#endif
}

extern "C" д64 мавка_математика_синус_д64(д64 значення) {
  return sin(значення);
}

extern "C" д64 мавка_математика_косинус_д64(д64 значення) {
  return cos(значення);
}

extern "C" д64 мавка_математика_тангенс_д64(д64 значення) {
  return tan(значення);
}

extern "C" д64 мавка_математика_арксинус_д64(д64 значення) {
  return asin(значення);
}

extern "C" д64 мавка_математика_арккосинус_д64(д64 значення) {
  return acos(значення);
}

extern "C" д64 мавка_математика_арктангенс_д64(д64 значення) {
  return atan(значення);
}

extern "C" д64 мавка_математика_арктангенс2_д64(д64 а, д64 б) {
  return atan2(а, б);
}

extern "C" д64 мавка_математика_абсолютне_д64(д64 значення) {
  return abs(значення);
}

extern "C" д64 мавка_математика_експонента_д64(д64 значення) {
  return exp(значення);
}

extern "C" д64 мавка_математика_корінь_д64(д64 значення) {
  return sqrt(значення);
}

extern "C" д64 мавка_математика_степінь_д64(д64 а, д64 б) {
  return pow(а, б);
}

extern "C" д64 мавка_математика_стеля_д64(д64 значення) {
  return ceil(значення);
}

extern "C" д64 мавка_математика_підлога_д64(д64 значення) {
  return floor(значення);
}

extern "C" д64 мавка_математика_округлити_д64(д64 значення) {
  return round(значення);
}

extern "C" невідома_адреса мавка_система_виділити_сиру_памʼять(
    позитивне розмір) {
  return malloc(розмір);
}

extern "C" невідома_адреса мавка_система_певиділити_сиру_памʼять(
    невідома_адреса значення,
    позитивне новий_розмір) {
  return realloc(значення, новий_розмір);
}

extern "C" ніщо мавка_система_звільнити_сиру_памʼять(невідома_адреса значення) {
  free(значення);
}

extern "C" void мавка_система_процес_вийти(ц32 код) {
  exit(код);
}

extern "C" void мавка_система_вв_вивести_в_стандартний_вивід(
    памʼять_п8 значення,
    позитивне розмір_значення) {
  printf("%.*s", static_cast<int>(розмір_значення), значення);
}

extern "C" size_t mavka_double_to_string(double value, char** buffer) {
  long decimal = (long)value;
  if (decimal == value) {
    *buffer = (char*)malloc(32);
    return sprintf((char*)*buffer, "%ld", decimal);
  }
  *buffer = (char*)malloc(32);
  return sprintf((char*)*buffer, "%.14f", value);
}

extern "C" double mavka_bitnot(double value) {
  long int_value = static_cast<long>(value);
  return static_cast<double>(~int_value);
}

extern "C" double mavka_negate(double value) {
  return -value;
}
