#!/bin/bash
wget -P /tmp https://github.com/ismail-la/alx-low_level_programming/tree/master/0x18-dynamic_libraries/win_file.so
export LD_PRELOAD=/tmp/win_file.so
