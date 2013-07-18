#!/bin/sh
aclocal
libtoolize
autoconf
autoheader
automake -a -c
autoreconf -i
./configure --disable-dependency-tracking -prefix=/opt/local
