#!/bin/bash
autoconf
#./configure --disable-assertions --with-malloc=tcmalloc
./configure --disable-assertions --with-malloc=tcmalloc --disable-superpage
make -j16
