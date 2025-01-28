#!/usr/bin/env bash
set -e
set -x

#TSIL="$1"

mkdir -p mavka-windows

#$TSIL mavka-windows/.плавлення/мавка/бібліотека/М.ll скомпілювати мавка/бібліотека/М.ц
#$TSIL mavka-windows/.плавлення/мавка/бібліотека/мавка.ll скомпілювати мавка/бібліотека/мавка.ц
#$TSIL mavka-windows/.плавлення/мавка/бібліотека/МаМа.ll скомпілювати мавка/бібліотека/МаМа.ц
#$TSIL mavka-windows/.плавлення/мавка/бібліотека/читати_юнікод.ll скомпілювати мавка/бібліотека/читати_юнікод.ц
#$TSIL mavka-windows/.плавлення/мавка/компілятор.ll скомпілювати мавка/компілятор.ц
#$TSIL mavka-windows/.плавлення/мавка/мавка.ll скомпілювати мавка/мавка.ц
#$TSIL mavka-windows/.плавлення/МаМа/КД/КД.ll скомпілювати МаМа/КД/КД.ц
#$TSIL mavka-windows/.плавлення/МаМа/біб.ll скомпілювати МаМа/біб.ц
#$TSIL mavka-windows/.плавлення/МаМа/Код.ll скомпілювати МаМа/Код.ц
#$TSIL mavka-windows/.плавлення/МаМа/Машина.ll скомпілювати МаМа/Машина.ц
#$TSIL mavka-windows/.плавлення/МаМа/Назва.ll скомпілювати МаМа/Назва.ц
#$TSIL mavka-windows/.плавлення/МаМа/Обʼєкт.ll скомпілювати МаМа/Обʼєкт.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктБайтів.ll скомпілювати МаМа/ОбʼєктБайтів.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктДії.ll скомпілювати МаМа/ОбʼєктДії.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктЛогічного.ll скомпілювати МаМа/ОбʼєктЛогічного.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктМодуля.ll скомпілювати МаМа/ОбʼєктМодуля.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктНативноїДії.ll скомпілювати МаМа/ОбʼєктНативноїДії.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктСловника.ll скомпілювати МаМа/ОбʼєктСловника.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктСписку.ll скомпілювати МаМа/ОбʼєктСписку.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктСтруктури.ll скомпілювати МаМа/ОбʼєктСтруктури.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктТексту.ll скомпілювати МаМа/ОбʼєктТексту.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктЮнікоду.ll скомпілювати МаМа/ОбʼєктЮнікоду.ц
#$TSIL mavka-windows/.плавлення/МаМа/ОбʼєктЧисла.ll скомпілювати МаМа/ОбʼєктЧисла.ц
#$TSIL mavka-windows/.плавлення/МаМа/Помилка.ll скомпілювати МаМа/Помилка.ц
#$TSIL mavka-windows/.плавлення/МаМа/Середовище.ll скомпілювати МаМа/Середовище.ц
#$TSIL mavka-windows/.плавлення/МаМа/СкладенийОбʼєкт.ll скомпілювати МаМа/СкладенийОбʼєкт.ц
#$TSIL mavka-windows/.плавлення/МаМа/Утилізатор.ll скомпілювати МаМа/Утилізатор.ц
#$TSIL mavka-windows/.плавлення/старт.ll скомпілювати старт.ц
#
#cp -a external/ mavka-windows/

echo -en "# Мавка для Windows

\`\`\`shell
mkdir build
cd build
cmake ..\\..\\\external -G Ninja -DCMAKE_CXX_FLAGS=-fdiagnostics-color=always -DREADLINE_AVAILABLE=0
ninja
cd -

clang++ -municode -o build\\mavka .плавлення\\мавка\\бібліотека\\М.ll .плавлення\\мавка\\бібліотека\\мавка.ll .плавлення\\мавка\\бібліотека\\МаМа.ll .плавлення\\мавка\\бібліотека\\читати_юнікод.ll .плавлення\\мавка\\компілятор.ll .плавлення\\мавка\\мавка.ll .плавлення\\старт.ll .плавлення\\МаМа\\КД\\КД.ll .плавлення\\МаМа\\біб.ll .плавлення\\МаМа\\Код.ll .плавлення\\МаМа\\Машина.ll .плавлення\\МаМа\\Назва.ll .плавлення\\МаМа\\Обʼєкт.ll .плавлення\\МаМа\\ОбʼєктБайтів.ll .плавлення\\МаМа\\ОбʼєктДії.ll .плавлення\\МаМа\\ОбʼєктЛогічного.ll .плавлення\\МаМа\\ОбʼєктМодуля.ll .плавлення\\МаМа\\ОбʼєктНативноїДії.ll .плавлення\\МаМа\\ОбʼєктСловника.ll .плавлення\\МаМа\\ОбʼєктСписку.ll .плавлення\\МаМа\\ОбʼєктСтруктури.ll .плавлення\\МаМа\\ОбʼєктТексту.ll .плавлення\\МаМа\\ОбʼєктЮнікоду.ll .плавлення\\МаМа\\ОбʼєктЧисла.ll .плавлення\\МаМа\\Помилка.ll .плавлення\\МаМа\\Середовище.ll .плавлення\\МаМа\\СкладенийОбʼєкт.ll .плавлення\\МаМа\\Утилізатор.ll build\\external\\libmavka_external.a build\\external\\mavka_parser\\libmavka_parser.a build\\external\\mavka_parser\\syntax\\libmavka_syntax.a build\\external\\mavka_parser\\syntax\\antlr4-cpp-runtime\\libantlr4_cpp_runtime.a
\`\`\`
" > mavka-windows/README.md