#!/bin/sh

utilsdir="$(dirname "$0" )"

echo unittests="ctest -C unit_tests --output-junit tests.xml --test-dir $utilsdir/build/test/"

# $unittests 