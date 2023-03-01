#!/bin/sh

utilsdir="$(dirname "$0" )"

echo unittests="ctest -C unit_tests --test-dir $utilsdir/build/test/"

# $unittests