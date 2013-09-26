#!/bin/sh
aclocal
libtoolize
autoconf
autoheader
automake -a -c
autoreconf -i
./configure
