#!/bin/bash
wget -P /tmp https://github.com/0xTariq-dev/alx-low_level_programming/blob/0xTariq-dev/0x18-dynamic_libraries/npick.so
export LD_PRELOAD=./npick.so
