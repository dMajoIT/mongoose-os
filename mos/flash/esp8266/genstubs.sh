#!/bin/bash

set -e -x

make -C ../../../common/platforms/esp8266/stubs clean wrap \
  STUB="../../esp/stub_flasher.c" LIBS="../../esp/slip.c uart.c" \
  STUB_JSON="${PWD}/data/stub_flasher.json"

go generate -v
