AM_CFLAGS = $(libcrippy_CFLAGS) -I../include
AM_LDFLAGS = $(libcrippy_LDFLAGS)
AM_LIBS = $(libcrippy_LIBS)

bin_PROGRAMS = machoman dwarfman

machoman_SOURCES = machoman.c
machoman_CFLAGS = $(AM_CFLAGS)
machoman_LDFLAGS = $(AM_LDFLAGS)
machoman_LDADD = ../src/libmacho-1.0.la

dwarfman_SOURCES = dwarfman.c
dwarfman_CFLAGS = $(AM_CFLAGS)
dwarfman_LDFLAGS = $(AM_LDFLAGS)
dwarfman_LDADD = ../src/libmacho-1.0.la
