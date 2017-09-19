#!/usr/bin/env bash
#
# Copyright (c) 2017. All Rights Reserved
#
# Author:
#   Wang Shijun
# Date:
#   2017/09/19
# Brief:
#   BUILD AND RUN THE TESTS
# Usage:
#   bash run_tests.sh
#

# COMPILE
g++ -std=c++11 -o tests unit_test/*.cpp src/*.cpp -lgtest

# CHECK COMPILING STATUS
if [ $? -eq 0 ]; then
    echo "======= BUILD OK ======="
    ./tests  # RUN DEMO
else
    echo "======= BUILD FAIL ======="
    # EXIT
fi


