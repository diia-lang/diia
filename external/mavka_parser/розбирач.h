extern "C" {
#define АСДВидНіщо 0
#define АСДВидВизначити 1
#define АСДВидЗвернутись 2
#define АСДВидОтримати 3
#define АСДВидОтриматиЗаПозицією 5
#define АСДВидЗмінити 6
#define АСДВидЗмінитиЗаПозицією 8
#define АСДВидВиконати 9
#define АСДВидДія 12
#define АСДВидСтруктура 13
#define АСДВидЧисло 18
#define АСДВидТекст 19
#define АСДВидОперація 21
#define АСДВидЯкщо 22
#define АСДВидПоки 23
#define АСДВидВернути 24
#define АСДВидЗначенняЯкщо 27
#define АСДВидСамоОперація 29
#define АСДВидВзяти 33
#define АСДВидСпробувати 34
#define АСДВидВпасти 35
#define АСДВидДати 36
#define АСДВидМодуль 37
#define АСДВидСписок 38
#define АСДВидСловник 39
#define АСДВидСимвол 40
#define АСДВидПеребрати 41
#define АСДВидЦикл 42
#define АСДВидВизначитиЗзовні 43
#define АСДВидПеребратиДіапазон 44
#define АСДВидВічнийЦикл 45 // 45

#define АСДОпераціяМноження 1
#define АСДОпераціяДілення 2
#define АСДОпераціяМодуль 3
#define АСДОпераціяДодавання 4
#define АСДОпераціяВіднімання 5
#define АСДОпераціяЗсувВліво 6
#define АСДОпераціяЗсувВправо 7
#define АСДОпераціяЗсувВправоЗнаковий 8
#define АСДОпераціяМенше 9
#define АСДОпераціяБільше 10
#define АСДОпераціяМеншеРівне 11
#define АСДОпераціяБільшеРівне 12
#define АСДОпераціяРівне 13
#define АСДОпераціяНерівне 14
#define АСДОпераціяДІ 15
#define АСДОпераціяВАБО 16
#define АСДОпераціяДАБО 17
#define АСДОпераціяІ 18
#define АСДОпераціяАБО 19
#define АСДОпераціяДіленняНаціло 20
#define АСДОпераціяПіднесенняДоСтепеня 21
#define АСДОпераціяМістить 22
#define АСДОпераціяНеМістить 23
#define АСДОпераціяЄ 24
#define АСДОпераціяНеЄ 25

#define АСДСамоОпераціяЛогічнеНі 1
#define АСДСамоОпераціяДвійковеНі 2
#define АСДСамоОпераціяПлюс 3
#define АСДСамоОпераціяМінус 4

struct Місцезнаходження;
struct АСДЗначення;
struct СписокАСДЗначень;

struct Ідентифікатор;
struct Параметр;
struct Аргумент;
struct ЕлементДати;
struct ЕлементВзяти;
struct ЕлементСловника;

struct АСДДаніВизначити;
struct АСДДаніЗвернутись;
struct АСДДаніОтримати;
struct АСДДаніОтриматиЗаПозицією;
struct АСДДаніЗмінити;
struct АСДДаніЗмінитиЗаПозицією;
struct АСДДаніВиконати;
struct АСДДаніДія;
struct АСДДаніСтруктура;
struct АСДДаніЧисло;
struct АСДДаніТекст;
struct АСДДаніСимвол;
struct АСДДаніОперація;
struct АСДДаніЯкщо;
struct АСДДаніПоки;
struct АСДДаніПеребрати;
struct АСДДаніЦикл;
struct АСДДаніВічнийЦикл;
struct АСДДаніВернути;
struct АСДДаніЗначенняЯкщо;
struct АСДДаніСамоОперація;
struct АСДДаніВзяти;
struct АСДДаніСпробувати;
struct АСДДаніВпасти;
struct АСДДаніДати;
struct АСДДаніМодуль;
struct АСДДаніСписок;
struct АСДДаніСловник;
struct АСДДаніВизначитиЗзовні;
struct АСДДаніПеребратиДіапазон;

struct ТекстКоду;
struct ПомилкаРозборуМавки;
struct РезультатРозборуМавки;

struct Місцезнаходження {
  ТекстКоду* текст_коду;
  size_t рядок;
  size_t стовпець;
};

struct АСДЗначення {
  size_t вид;
  void* дані;
  Місцезнаходження* місцезнаходження;
};

struct СписокАСДЗначень {
  size_t довжина;
  АСДЗначення** елементи;
};

struct Ідентифікатор {
  char* значення;
  Місцезнаходження* місцезнаходження;
};

struct Параметр {
  Ідентифікатор* ідентифікатор;
  size_t кількість_типів;
  АСДЗначення** типи;
  АСДЗначення* значення;
  Місцезнаходження* місцезнаходження;
};

struct Аргумент {
  Ідентифікатор* ідентифікатор;
  АСДЗначення* значення;
  Місцезнаходження* місцезнаходження;
};

struct ЕлементДати {
  Ідентифікатор* ідентифікатор;
  Ідентифікатор* ідентифікатор_як;
  Місцезнаходження* місцезнаходження;
};

struct ЕлементВзяти {
  Ідентифікатор* ідентифікатор;
  Ідентифікатор* ідентифікатор_як;
  Місцезнаходження* місцезнаходження;
};

struct ЕлементСловника {
  АСДЗначення* ключ;
  АСДЗначення* значення;
  Місцезнаходження* місцезнаходження;
};

struct АСДДаніВизначити {
  Ідентифікатор* ідентифікатор;
  АСДЗначення* значення;
};

struct АСДДаніЗвернутись {
  Ідентифікатор* ідентифікатор;
};

struct АСДДаніОтримати {
  АСДЗначення* обʼєкт;
  Ідентифікатор* ідентифікатор;
};

struct АСДДаніОтриматиЗаПозицією {
  АСДЗначення* обʼєкт;
  АСДЗначення* позиція;
};

struct АСДДаніЗмінити {
  АСДЗначення* обʼєкт;
  Ідентифікатор* ідентифікатор;
  АСДЗначення* значення;
};

struct АСДДаніЗмінитиЗаПозицією {
  АСДЗначення* обʼєкт;
  АСДЗначення* позиція;
  АСДЗначення* значення;
};

struct АСДДаніВиконати {
  АСДЗначення* обʼєкт;
  size_t кількість_аргументів;
  Аргумент** аргументи;
};

struct АСДДаніДія {
  АСДЗначення* структура_;
  Ідентифікатор* ідентифікатор;
  size_t кількість_параметрів;
  Параметр** параметри;
  size_t кількість_типів_результату;
  АСДЗначення** типи_результату;
  СписокАСДЗначень* тіло;
};

struct АСДДаніСтруктура {
  Ідентифікатор* ідентифікатор;
  АСДЗначення* предок;
  size_t кількість_параметрів;
  Параметр** параметри;
};

struct АСДДаніЧисло {
  size_t база;
  char* значення;
  size_t дробове;
};

struct АСДДаніТекст {
  Ідентифікатор* ідентифікатор;
  char* значення;
};

struct АСДДаніСимвол {
  Ідентифікатор* ідентифікатор;
  char* значення;
};

struct АСДДаніОперація {
  АСДЗначення* ліво;
  size_t операція;
  АСДЗначення* право;
};

struct АСДДаніЯкщо {
  АСДЗначення* умова;
  СписокАСДЗначень* тіло;
  СписокАСДЗначень* тіло_інакше;
};

struct АСДДаніПоки {
  АСДЗначення* умова;
  СписокАСДЗначень* тіло;
};

struct АСДДаніПеребрати {
  АСДЗначення* обʼєкт;
  Ідентифікатор* ідентифікатор;
  СписокАСДЗначень* тіло;
};

struct АСДДаніЦикл {
  СписокАСДЗначень* старт;
  АСДЗначення* умова;
  СписокАСДЗначень* тіло;
  СписокАСДЗначень* ітерація;
};

struct АСДДаніВічнийЦикл {
  СписокАСДЗначень* тіло;
};

struct АСДДаніВернути {
  АСДЗначення* значення;
};

struct АСДДаніЗначенняЯкщо {
  АСДЗначення* умова;
  АСДЗначення* значення_так;
  АСДЗначення* значення_ні;
};

struct АСДДаніСамоОперація {
  size_t операція;
  АСДЗначення* обʼєкт;
};

struct АСДДаніВзяти {
  Ідентифікатор* тип;
  size_t довжина_шляху;
  Ідентифікатор** шлях;
  Ідентифікатор* ідентифікатор_як;
  size_t кількість_елементів;
  ЕлементВзяти** елементи;
};

struct АСДДаніСпробувати {
  СписокАСДЗначень* тіло;
  Ідентифікатор* ідентифікатор_зловити;
  СписокАСДЗначень* тіло_зловити;
};

struct АСДДаніВпасти {
  АСДЗначення* значення;
};

struct АСДДаніДати {
  size_t кількість_елементів;
  ЕлементДати** елементи;
};

struct АСДДаніМодуль {
  Ідентифікатор* ідентифікатор;
  СписокАСДЗначень* тіло;
};

struct АСДДаніСписок {
  size_t кількість_елементів;
  АСДЗначення** елементи;
};

struct АСДДаніСловник {
  size_t кількість_елементів;
  ЕлементСловника** елементи;
};

struct АСДДаніВизначитиЗзовні {
  Ідентифікатор* ідентифікатор;
  АСДЗначення* значення;
};

struct АСДДаніПеребратиДіапазон {
  АСДЗначення* від;
  size_t включно;
  АСДЗначення* до;
  Ідентифікатор* ідентифікатор;
  СписокАСДЗначень* тіло;
};

struct ТекстКоду {
  char* шлях;
  char* значення;
};

struct ПомилкаРозборуМавки {
  Місцезнаходження* місцезнаходження;
  char* повідомлення;
};

struct РезультатРозборуМавки {
  size_t успіх;
  СписокАСДЗначень* тіло;
  ПомилкаРозборуМавки* помилка;
};

РезультатРозборуМавки* розібрати_мавку(ТекстКоду* текст_коду);
char* код_операції_в_юнікод(size_t операція);
}