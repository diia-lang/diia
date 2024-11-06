#!/usr/bin/env sh
set -e
set -x

mkdir -p build/external
cd build/external
cmake ../../external -G Ninja -DCMAKE_CXX_FLAGS=-fdiagnostics-color=always
ninja
cd -

ціль .плавлення/МаМа/БазаНазв.ll скомпілювати МаМа/БазаНазв.ц
ціль .плавлення/МаМа/Дія.ll скомпілювати МаМа/Дія.ц
ціль .плавлення/МаМа/Код.ll скомпілювати МаМа/Код.ц
ціль .плавлення/МаМа/Компілятор.ll скомпілювати МаМа/Компілятор.ц
ціль .плавлення/МаМа/Машина.ll скомпілювати МаМа/Машина.ц
ціль .плавлення/МаМа/НативнаДія.ll скомпілювати МаМа/НативнаДія.ц
ціль .плавлення/МаМа/Обʼєкт.ll скомпілювати МаМа/Обʼєкт.ц
ціль .плавлення/МаМа/Середовище.ll скомпілювати МаМа/Середовище.ц
ціль .плавлення/МаМа/Структура.ll скомпілювати МаМа/Структура.ц
ціль .плавлення/МаМа/Текст.ll скомпілювати МаМа/Текст.ц
ціль .плавлення/МаМа/Число.ll скомпілювати МаМа/Число.ц
ціль .плавлення/мавка.ll скомпілювати мавка.ц
clang++ -o мавка \
  .плавлення/МаМа/БазаНазв.ll \
  .плавлення/МаМа/Дія.ll \
  .плавлення/МаМа/Код.ll \
  .плавлення/МаМа/Компілятор.ll \
  .плавлення/МаМа/Машина.ll \
  .плавлення/МаМа/НативнаДія.ll \
  .плавлення/МаМа/Обʼєкт.ll \
  .плавлення/МаМа/Структура.ll \
  .плавлення/МаМа/Середовище.ll \
  .плавлення/МаМа/Текст.ll \
  .плавлення/МаМа/Число.ll \
  .плавлення/мавка.ll \
  build/external/libmavka_external.a \
  build/external/mavka_parser/libmavka_parser.a \
  build/external/mavka_parser/syntax/libmavka_syntax.a \
  build/external/mavka_parser/syntax/antlr4-cpp-runtime/libantlr4_cpp_runtime.a