#!/usr/bin/env bash
set -e
set -x

TSIL="$1"

mkdir -p mavka-windows

$TSIL mavka-windows/.плавлення/мавка/бібліотека/М.ll скомпілювати мавка/бібліотека/М.ц
$TSIL mavka-windows/.плавлення/мавка/бібліотека/мавка.ll скомпілювати мавка/бібліотека/мавка.ц
$TSIL mavka-windows/.плавлення/мавка/бібліотека/МаМа.ll скомпілювати мавка/бібліотека/МаМа.ц
$TSIL mavka-windows/.плавлення/мавка/бібліотека/читати_юнікод.ll скомпілювати мавка/бібліотека/читати_юнікод.ц
$TSIL mavka-windows/.плавлення/мавка/компілятор.ll скомпілювати мавка/компілятор.ц
$TSIL mavka-windows/.плавлення/мавка/мавка.ll скомпілювати мавка/мавка.ц
$TSIL mavka-windows/.плавлення/МаМа/КД/КД.ll скомпілювати МаМа/КД/КД.ц
$TSIL mavka-windows/.плавлення/МаМа/біб.ll скомпілювати МаМа/біб.ц
$TSIL mavka-windows/.плавлення/МаМа/Код.ll скомпілювати МаМа/Код.ц
$TSIL mavka-windows/.плавлення/МаМа/Машина.ll скомпілювати МаМа/Машина.ц
$TSIL mavka-windows/.плавлення/МаМа/Назва.ll скомпілювати МаМа/Назва.ц
$TSIL mavka-windows/.плавлення/МаМа/Обʼєкт.ll скомпілювати МаМа/Обʼєкт.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктБайтів.ll скомпілювати МаМа/ОбʼєктБайтів.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктДії.ll скомпілювати МаМа/ОбʼєктДії.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктЛогічного.ll скомпілювати МаМа/ОбʼєктЛогічного.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктМодуля.ll скомпілювати МаМа/ОбʼєктМодуля.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктНативноїДії.ll скомпілювати МаМа/ОбʼєктНативноїДії.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктСловника.ll скомпілювати МаМа/ОбʼєктСловника.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктСписку.ll скомпілювати МаМа/ОбʼєктСписку.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктСтруктури.ll скомпілювати МаМа/ОбʼєктСтруктури.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктТексту.ll скомпілювати МаМа/ОбʼєктТексту.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктЮнікоду.ll скомпілювати МаМа/ОбʼєктЮнікоду.ц
$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктЧисла.ll скомпілювати МаМа/ОбʼєктЧисла.ц
$TSIL mavka-windows/.плавлення/МаМа/Помилка.ll скомпілювати МаМа/Помилка.ц
$TSIL mavka-windows/.плавлення/МаМа/Середовище.ll скомпілювати МаМа/Середовище.ц
$TSIL mavka-windows/.плавлення/МаМа/СкладенийОбʼєкт.ll скомпілювати МаМа/СкладенийОбʼєкт.ц
$TSIL mavka-windows/.плавлення/МаМа/Утилізатор.ll скомпілювати МаМа/Утилізатор.ц
$TSIL mavka-windows/.плавлення/старт.ll скомпілювати старт.ц

cp -a external/ mavka-windows/

echo -en "# Мавка для Windows

> Згенеровано автоматично. Може не працювати або працювати неправильно." > mavka-windows/README.md