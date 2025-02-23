#!/usr/bin/env bash
set -e
set -x

PLATFORM="l"

export CC="clang"
export CXX="clang++"
export AR="llvm-ar"
export RANLIB="llvm-ranlib"
export TSIL="ціль"
OUT="build-$PLATFORM/мавка"

READLINE_AVAILABLE=0
if [ -f /usr/include/readline/readline.h ]; then
  READLINE_AVAILABLE=1
fi

$TSIL .плавлення/мавка/бібліотека/М.ll скомпілювати мавка/бібліотека/М.ц
$TSIL .плавлення/мавка/бібліотека/мавка.ll скомпілювати мавка/бібліотека/мавка.ц
$TSIL .плавлення/мавка/бібліотека/МаМа.ll скомпілювати мавка/бібліотека/МаМа.ц
$TSIL .плавлення/мавка/бібліотека/читати_юнікод.ll скомпілювати мавка/бібліотека/читати_юнікод.ц
$TSIL .плавлення/мавка/компілятор/компілятор.ll скомпілювати мавка/компілятор/компілятор.ц
$TSIL .плавлення/мавка/розбирач/розбирач.ll скомпілювати мавка/розбирач/розбирач.ц
$TSIL .плавлення/мавка/математика.ll скомпілювати мавка/математика.ц
$TSIL .плавлення/мавка/мавка.ll скомпілювати мавка/мавка.ц
$TSIL .плавлення/МаМа/КД/КД.ll скомпілювати МаМа/КД/КД.ц
$TSIL .плавлення/МаМа/біб.ll скомпілювати МаМа/біб.ц
$TSIL .плавлення/МаМа/Код.ll скомпілювати МаМа/Код.ц
$TSIL .плавлення/МаМа/Машина.ll скомпілювати МаМа/Машина.ц
$TSIL .плавлення/МаМа/Назва.ll скомпілювати МаМа/Назва.ц
$TSIL .плавлення/МаМа/Предмет.ll скомпілювати МаМа/Предмет.ц
$TSIL .плавлення/МаМа/ПредметАдреси.ll скомпілювати МаМа/ПредметАдреси.ц
$TSIL .плавлення/МаМа/ПредметБайтів.ll скомпілювати МаМа/ПредметБайтів.ц
$TSIL .плавлення/МаМа/ПредметДії.ll скомпілювати МаМа/ПредметДії.ц
$TSIL .плавлення/МаМа/ПредметЛогічного.ll скомпілювати МаМа/ПредметЛогічного.ц
$TSIL .плавлення/МаМа/ПредметМодуля.ll скомпілювати МаМа/ПредметМодуля.ц
$TSIL .плавлення/МаМа/ПредметНативноїДії.ll скомпілювати МаМа/ПредметНативноїДії.ц
$TSIL .плавлення/МаМа/ПредметСловника.ll скомпілювати МаМа/ПредметСловника.ц
$TSIL .плавлення/МаМа/ПредметСписку.ll скомпілювати МаМа/ПредметСписку.ц
$TSIL .плавлення/МаМа/ПредметСтруктури.ll скомпілювати МаМа/ПредметСтруктури.ц
$TSIL .плавлення/МаМа/ПредметТексту.ll скомпілювати МаМа/ПредметТексту.ц
$TSIL .плавлення/МаМа/ПредметЮнікоду.ll скомпілювати МаМа/ПредметЮнікоду.ц
$TSIL .плавлення/МаМа/ПредметЧисла.ll скомпілювати МаМа/ПредметЧисла.ц
$TSIL .плавлення/МаМа/Помилка.ll скомпілювати МаМа/Помилка.ц
$TSIL .плавлення/МаМа/Середовище.ll скомпілювати МаМа/Середовище.ц
$TSIL .плавлення/МаМа/СкладенийПредмет.ll скомпілювати МаМа/СкладенийПредмет.ц
$TSIL .плавлення/МаМа/Утилізатор.ll скомпілювати МаМа/Утилізатор.ц
$TSIL .плавлення/старт.ll скомпілювати старт.ц

CXX_OPTIONS=(
  "-std=c++23"
  "-O3"
)
if [ "$READLINE_AVAILABLE" -eq 1 ]; then
  CXX_OPTIONS+=("-lreadline")
  CXX_OPTIONS+=("-D MAVKA_READLINE")
fi

$CXX "${CXX_OPTIONS[@]}" -o "$OUT" \
  .плавлення/мавка/бібліотека/М.ll \
  .плавлення/мавка/бібліотека/мавка.ll \
  .плавлення/мавка/бібліотека/МаМа.ll \
  .плавлення/мавка/бібліотека/читати_юнікод.ll \
  .плавлення/мавка/розбирач/розбирач.ll \
  .плавлення/мавка/компілятор/компілятор.ll \
  .плавлення/мавка/математика.ll \
  .плавлення/мавка/мавка.ll \
  .плавлення/старт.ll \
  .плавлення/МаМа/КД/КД.ll \
  .плавлення/МаМа/біб.ll \
  .плавлення/МаМа/Код.ll \
  .плавлення/МаМа/Машина.ll \
  .плавлення/МаМа/Назва.ll \
  .плавлення/МаМа/Предмет.ll \
  .плавлення/МаМа/ПредметАдреси.ll \
  .плавлення/МаМа/ПредметБайтів.ll \
  .плавлення/МаМа/ПредметДії.ll \
  .плавлення/МаМа/ПредметЛогічного.ll \
  .плавлення/МаМа/ПредметМодуля.ll \
  .плавлення/МаМа/ПредметНативноїДії.ll \
  .плавлення/МаМа/ПредметСловника.ll \
  .плавлення/МаМа/ПредметСписку.ll \
  .плавлення/МаМа/ПредметСтруктури.ll \
  .плавлення/МаМа/ПредметТексту.ll \
  .плавлення/МаМа/ПредметЮнікоду.ll \
  .плавлення/МаМа/ПредметЧисла.ll \
  .плавлення/МаМа/Помилка.ll \
  .плавлення/МаМа/Середовище.ll \
  .плавлення/МаМа/СкладенийПредмет.ll \
  .плавлення/МаМа/Утилізатор.ll \
  external/mavka.cpp