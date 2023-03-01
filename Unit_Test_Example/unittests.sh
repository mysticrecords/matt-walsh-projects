#!/bin/sh

utilsdir="$(dirname "$0" )"

echo unittests="ctest -C unit_tests --test-dir $utilsdir/build/test/"

echo "testing another push for jenkins and git hooks"

# $unittests