// наразі змушені використовувати точку входу з C++
// так як Ціль ще не дуже може зробити те що треба на Windows

#include <cstring>

extern "C" int стартувати_мавку(int argc, unsigned char** argv);

#ifdef _WIN32
#include <windows.h>

int wmain(int argc, wchar_t** argv) {
  int argc8 = 0;
  unsigned char** argv8 = new unsigned char*[argc];
  for (int i = 0; i < argc; i++) {
    int len = WideCharToMultiByte(CP_UTF8, 0, argv[i], -1, NULL, 0, NULL, NULL);
    argv8[i] = new unsigned char[len];
    WideCharToMultiByte(CP_UTF8, 0, argv[i], -1, reinterpret_cast<char*>(argv8[i]), len, NULL,
                        NULL);
    argc8++;
  }
  int ret = стартувати_мавку(argc8, argv8);
  for (int i = 0; i < argc; i++) {
    delete[] argv8[i];
  }
  delete[] argv8;
  return ret;
}
#endif

#ifdef __linux__
int main(int argc, char** argv) {
  return стартувати_мавку(argc, reinterpret_cast<unsigned char**>(argv));
}
#endif

#ifdef __APPLE__
int main(int argc, char** argv) {
  return стартувати_мавку(argc, reinterpret_cast<unsigned char**>(argv));
}
#endif
