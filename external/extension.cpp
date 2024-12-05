#include <dlfcn.h>
#include <codecvt>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <filesystem>
#include <iostream>
#include <locale>
#include <valarray>

extern "C" unsigned char* прочитати_файл(unsigned char* шлях) {
  FILE* file = fopen((char*)шлях, "rb");
  if (file == nullptr) {
    return nullptr;
  }
  fseek(file, 0, SEEK_END);
  auto length = ftell(file);
  fseek(file, 0, SEEK_SET);
  auto buffer = (unsigned char*)malloc(length + 1);
  fread(buffer, 1, length, file);
  fclose(file);
  buffer[length] = 0;
  return buffer;
}

extern "C" void виправити_шлях(unsigned char* шлях, unsigned char** вихід) {
  std::string path = (char*)шлях;
  std::filesystem::path p(path);
  *вихід =
      (unsigned char*)strdup(absolute(weakly_canonical(p)).string().c_str());
}

extern "C" unsigned char перевірити_чи_ю8_закінчується_на(
    unsigned char* value,
    unsigned char* suffix) {
  std::string str = (char*)value;
  std::string suf = (char*)suffix;
  return str.ends_with(suf);
}

extern "C" void отримати_назву_файлу_без_розширення(unsigned char* шлях,
                                                    unsigned char** вихід) {
  std::string path = (char*)шлях;
  std::filesystem::path p(path);
  *вихід = (unsigned char*)strdup(p.stem().string().c_str());
}

extern "C" int strcmp32(char32_t* a, char32_t* b) {
  std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> utf32conv;
  std::u32string ua = a;
  std::u32string ub = b;
  return strcmp(utf32conv.to_bytes(ua).c_str(), utf32conv.to_bytes(ub).c_str());
}

extern "C" int strlen32(char32_t* a) {
  int len = 0;
  while (a[len] != 0) {
    len++;
  }
  return len;
}

extern "C" char* mavka_read_from_stdin(char* prefix) {
  std::cout << prefix;
  std::string line;
  if (std::cin.eof()) {
    return nullptr;
  }
  std::getline(std::cin, line);
  return strdup(line.c_str());
}

extern "C" {
#include <locale.h>
#include <stdlib.h>
#include "isocline/include/isocline.h"

static void completer(ic_completion_env_t* cenv, const char* input) {}

static void highlighter(ic_highlight_env_t* henv,
                        const char* input,
                        void* arg) {}

void mavka_dialog(void* data, void (*run)(void* data, unsigned char* value)) {
  setlocale(LC_ALL, "C.UTF-8");
  ic_set_default_completer(&completer, nullptr);
  ic_set_default_highlighter(highlighter, nullptr);
  ic_enable_auto_tab(true);
  ic_set_prompt_marker(" ", nullptr);
  ic_set_history(nullptr, 200);
  unsigned char* input;
  while ((input = (unsigned char*)ic_readline("\e[0m-")) != nullptr) {
    run(data, input);
    free(input);
  }
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
    unsigned char* path,
    unsigned char* name) {
  void* dobject = dlopen((char*)path, RTLD_LAZY);
  if (dobject == nullptr) {
    return nullptr;
  }
  dlerror();
  void* extfptr = dlsym(dobject, (char*)name);
  if (extfptr == nullptr) {
    return nullptr;
  }
  dlerror();
  return extfptr;
}

extern "C" double mavka_sin(double value) {
  return sin(value);
}

extern "C" double mavka_cos(double value) {
  return cos(value);
}

extern "C" double mavka_tan(double value) {
  return tan(value);
}

extern "C" double mavka_asin(double value) {
  return asin(value);
}

extern "C" double mavka_acos(double value) {
  return acos(value);
}

extern "C" double mavka_atan(double value) {
  return atan(value);
}

extern "C" double mavka_atan2(double y, double x) {
  return atan2(y, x);
}

extern "C" double mavka_abs(double value) {
  return abs(value);
}

extern "C" double mavka_exp(double value) {
  return exp(value);
}

extern "C" double mavka_sqrt(double value) {
  return sqrt(value);
}

extern "C" double mavka_pow(double a, double b) {
  return pow(a, b);
}

extern "C" double mavka_ceil(double value) {
  return ceil(value);
}

extern "C" double mavka_floor(double value) {
  return floor(value);
}

extern "C" double mavka_round(double value) {
  return round(value);
}