#!/bin/bash
wget -q -O /./fakerand.so https://github.com/matcls/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/fakerand.so
export LD_PRELOAD=/./fakerand.so
