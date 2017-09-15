#!/usr/bin/env bash
#
# Copyright (c) 2017. All Rights Reserved
#
# Author:
#   Wang Shijun
# Date:
#   2017/09/15
# Brief:
#   BUILD AND RUN THE DEMO
# Usage:
#   bash build_and_run.sh
#

# COMPILE
g++ -std=c++11 -o demo *.cpp

# CHECK COMPILING STATUS
if [ $? -eq 0 ]; then
    echo "======= BUILD OK ======="
    ./demo  # RUN DEMO
else
    echo "======= BUILD FAIL ======="
    # EXIT
fi

