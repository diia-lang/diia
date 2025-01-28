#!/usr/bin/env sh

set -e

cd syntax
java -jar antlr-4.13.0-complete.jar -Dlanguage=Cpp *.g4 -visitor -o generated
cd ..
exit 0