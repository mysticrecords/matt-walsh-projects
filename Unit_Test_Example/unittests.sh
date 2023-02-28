#!/bin/sh

utilsdir="$(dirname "$0" )"

unittests="ctest -C unit_tests --test-dir $utilsdir/build/test/"

$unittests