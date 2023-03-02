#!/bin/sh

utilsdir="$(dirname "$0" )"


rebuild="cmake --build build"

unittests="ctest -C unit_tests --output-junit tests.xml --test-dir $utilsdir/build/test/"

$rebuild
$unittests

echo "$PWD"

# $unittests 