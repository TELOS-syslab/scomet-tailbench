# Makefile.in generated by automake 1.11.3 from Makefile.am.
# src/fc/tests/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004, 2005, 2006, 2007, 2008, 2009, 2010, 2011 Free Software
# Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.



# if tcl.h is not in your /usr/include, put its path here.
# I haven't found a way to locate it with autoconf yet.
#
# deathstar:
# Built-from-sources, with symbols:
# note: not on chianti:
# TCL_INCLUDE = /scratch/s/tcl/include
# TCL_LIB = -L/scratch/s/tcl/lib -ltcl8.5

pkgdatadir = $(datadir)/shore-storage-manager
pkgincludedir = $(includedir)/shore-storage-manager
pkglibdir = $(libdir)/shore-storage-manager
pkglibexecdir = $(libexecdir)/shore-storage-manager
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
DIST_COMMON = $(srcdir)/Makefile.am $(srcdir)/Makefile.in \
	$(top_srcdir)/Makefile.generic $(top_srcdir)/Makefile.local
#am__append_1 = -features=extensions,zla \
#	-xdebugformat=stabs -DSOLARIS2 \
#	-library=stlport4 -mt -lpthread
# -pedantic requires -Wno-long-long
# TODO: fix this comment
# Let's avoid use of long long if possible, and require
# explicit C++ types based on data model of compiler.  There
# might be some cases where the underlying library function
# or system include file uses long long, in which case we will have to.
#
#
am__append_2 = -Wextra -Wall -Wno-long-long -pthread
#am__append_3 = UNKNOWN COMPILER
am__append_4 = -D__GNUC_AS__ -D_ASM
#am__append_5 = $(TARGET_FLAGS)
am__append_6 = $(TARGET_FLAGS) 
#am__append_7 = $(TARGET_FLAGS) -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 
#am__append_8 = -I$(top_srcdir)/src/compat

# --------------------------------------------------------
#
# Determine which gcc warnings to use, based on which 
# compiler version we are using.
#
# -Wno-deprecated # TODO:remove
#
# Note: gcc seems to issue a false positive warning about strict aliasing
# in the new override code, so we have to add -fno-strict-aliasing.
# --------------------------------------------------------
am__append_9 = -Wall -fno-strict-aliasing -Wextra -Wpointer-arith -Wwrite-strings

# /* In adition to the 3.2 warnings, prototype errors for c/objc only */
am__append_10 = 
# /* GCC 3.2 doesn't like -Wmissing-declarations and -Wnested-externs */
##am__append_11 = -Wstrict-prototypes -Wmissing-prototypes 
# /* Need this to stop warnings of normal (old) standard c++ facilities use. */
#am__append_12 = -Wstrict-prototypes \
#	-Wmissing-prototypes \
#	-Wmissing-declarations \
#	-Wnested-externs
am__append_13 = -Woverloaded-virtual 
am__append_14 = $(SYMBOLSFLAGS)
#am__append_15 = $(NOSYMBOLSFLAGS)
# PURIFY_COLLECTOR = -collector=/usr/bin/ld
#am__append_16 = $(PURIFY_LIBS)
#am__append_17 = $(check_PROGRAMS:%=%.pure)
#am__append_18 = -DPURIFY -DPURIFY_ZERO -I$(PURIFY_INCLUDE) 
# QUANTIFY_COLLECTOR = -collector=/usr/bin/ld
#am__append_19 = $(QUANTIFY_LIBS)
#am__append_20 = $(check_PROGRAMS:%=%.quant)
#am__append_21 = -DQUANTIFY -I$(QUANTIFY_INCLUDE) 
# PURECOV_COLLECTOR = -collector=/usr/bin/ld
#am__append_22 = $(PURECOV_LIBS)
#am__append_23 = $(check_PROGRAMS:%=%.purecov)
#am__append_24 = -DPURECOV -I$(PURECOV_INCLUDE) 
subdir = src/fc/tests
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/configure.ac
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(install_sh) -d
CONFIG_HEADER = $(top_builddir)/config/shore-config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am_basic_sizes_OBJECTS = basic_sizes.$(OBJEXT)
basic_sizes_OBJECTS = $(am_basic_sizes_OBJECTS)
basic_sizes_LDADD = $(LDADD)
am__DEPENDENCIES_1 = $(top_srcdir)/src/atomic_ops/libatomic_ops.a \
	$(am__append_16) $(am__append_19) $(am__append_22)
basic_sizes_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_bitvector_OBJECTS = bitvector.$(OBJEXT)
bitvector_OBJECTS = $(am_bitvector_OBJECTS)
bitvector_LDADD = $(LDADD)
bitvector_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_box_OBJECTS = box.$(OBJEXT)
box_OBJECTS = $(am_box_OBJECTS)
box_LDADD = $(LDADD)
box_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_container_OBJECTS = container.$(OBJEXT)
container_OBJECTS = $(am_container_OBJECTS)
container_LDADD = $(LDADD)
container_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_cuckoo_OBJECTS = cuckoo.$(OBJEXT)
cuckoo_OBJECTS = $(am_cuckoo_OBJECTS)
cuckoo_LDADD = $(LDADD)
cuckoo_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_darray_OBJECTS = darray.$(OBJEXT)
darray_OBJECTS = $(am_darray_OBJECTS)
darray_LDADD = $(LDADD)
darray_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_errlogtest_OBJECTS = errlogtest.$(OBJEXT)
errlogtest_OBJECTS = $(am_errlogtest_OBJECTS)
errlogtest_LDADD = $(LDADD)
errlogtest_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_findprime_OBJECTS = findprime.$(OBJEXT)
findprime_OBJECTS = $(am_findprime_OBJECTS)
findprime_LDADD = $(LDADD)
findprime_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_findsizes_OBJECTS = findsizes.$(OBJEXT)
findsizes_OBJECTS = $(am_findsizes_OBJECTS)
findsizes_LDADD = $(LDADD)
findsizes_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_hash1_OBJECTS = hash1.$(OBJEXT)
hash1_OBJECTS = $(am_hash1_OBJECTS)
hash1_LDADD = $(LDADD)
hash1_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_hash2_OBJECTS = hash2.$(OBJEXT)
hash2_OBJECTS = $(am_hash2_OBJECTS)
hash2_LDADD = $(LDADD)
hash2_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_heap_OBJECTS = heap.$(OBJEXT)
heap_OBJECTS = $(am_heap_OBJECTS)
heap_LDADD = $(LDADD)
heap_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_io_OBJECTS = io.$(OBJEXT)
io_OBJECTS = $(am_io_OBJECTS)
io_LDADD = $(LDADD)
io_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_list1_OBJECTS = list1.$(OBJEXT)
list1_OBJECTS = $(am_list1_OBJECTS)
list1_LDADD = $(LDADD)
list1_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_list2_OBJECTS = list2.$(OBJEXT)
list2_OBJECTS = $(am_list2_OBJECTS)
list2_LDADD = $(LDADD)
list2_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_list3_OBJECTS = list3.$(OBJEXT)
list3_OBJECTS = $(am_list3_OBJECTS)
list3_LDADD = $(LDADD)
list3_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_memblock_OBJECTS = memblock.$(OBJEXT)
memblock_OBJECTS = $(am_memblock_OBJECTS)
memblock_LDADD = $(LDADD)
memblock_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_ntime_OBJECTS = ntime.$(OBJEXT)
ntime_OBJECTS = $(am_ntime_OBJECTS)
ntime_LDADD = $(LDADD)
ntime_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_rand_OBJECTS = rand.$(OBJEXT)
rand_OBJECTS = $(am_rand_OBJECTS)
rand_LDADD = $(LDADD)
rand_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_random_OBJECTS = random.$(OBJEXT)
random_OBJECTS = $(am_random_OBJECTS)
random_LDADD = $(LDADD)
random_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_rc_OBJECTS = rc.$(OBJEXT)
rc_OBJECTS = $(am_rc_OBJECTS)
rc_LDADD = $(LDADD)
rc_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_ss_OBJECTS = ss.$(OBJEXT)
ss_OBJECTS = $(am_ss_OBJECTS)
ss_LDADD = $(LDADD)
ss_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_stats_OBJECTS = stats.$(OBJEXT)
stats_OBJECTS = $(am_stats_OBJECTS)
stats_LDADD = $(LDADD)
stats_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
am_stats2_OBJECTS = test_stat.$(OBJEXT) stats2.$(OBJEXT)
stats2_OBJECTS = $(am_stats2_OBJECTS)
stats2_LDADD = $(LDADD)
stats2_DEPENDENCIES = ../libfc.a $(am__DEPENDENCIES_1)
DEFAULT_INCLUDES = -I. -I$(top_builddir)/config
depcomp = $(SHELL) $(top_srcdir)/config/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
CXXLD = $(CXX)
CXXLINK = $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) \
	-o $@
SOURCES = $(basic_sizes_SOURCES) $(bitvector_SOURCES) $(box_SOURCES) \
	$(container_SOURCES) $(cuckoo_SOURCES) $(darray_SOURCES) \
	$(errlogtest_SOURCES) $(findprime_SOURCES) \
	$(findsizes_SOURCES) $(hash1_SOURCES) $(hash2_SOURCES) \
	$(heap_SOURCES) $(io_SOURCES) $(list1_SOURCES) \
	$(list2_SOURCES) $(list3_SOURCES) $(memblock_SOURCES) \
	$(ntime_SOURCES) $(rand_SOURCES) $(random_SOURCES) \
	$(rc_SOURCES) $(ss_SOURCES) $(stats_SOURCES) $(stats2_SOURCES)
DIST_SOURCES = $(basic_sizes_SOURCES) $(bitvector_SOURCES) \
	$(box_SOURCES) $(container_SOURCES) $(cuckoo_SOURCES) \
	$(darray_SOURCES) $(errlogtest_SOURCES) $(findprime_SOURCES) \
	$(findsizes_SOURCES) $(hash1_SOURCES) $(hash2_SOURCES) \
	$(heap_SOURCES) $(io_SOURCES) $(list1_SOURCES) \
	$(list2_SOURCES) $(list3_SOURCES) $(memblock_SOURCES) \
	$(ntime_SOURCES) $(rand_SOURCES) $(random_SOURCES) \
	$(rc_SOURCES) $(ss_SOURCES) $(stats_SOURCES) $(stats2_SOURCES)
ETAGS = etags
CTAGS = ctags
am__tty_colors = \
red=; grn=; lgn=; blu=; std=
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = aclocal-1.15
AMTAR = $${TAR-tar}
AUTOCONF = autoconf
AUTOHEADER = autoheader
AUTOMAKE = automake-1.15
AWK = mawk
CC = gcc
CCAS = gcc
CCASDEPMODE = depmode=gcc3
CCASFLAGS = -g -O2
CCDEPMODE = depmode=gcc3
CFLAGS = 
CPP = gcc -E
CPPFLAGS = 
CXX = g++
CXXCPP = g++ -E
CXXDEPMODE = depmode=gcc3
# This clearing of CXXFLAGS is necessary to override the
# annoying -g -O2 that autoconf stuffs in there, and which
# I cannot find any other way to control.
CXXFLAGS = 
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
DTRACE = 
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
GREP = /bin/grep
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
LDFLAGS = 
LIBOBJS = 
LIBS = -lrt 
LTLIBOBJS = 
MAKEINFO = makeinfo
MKDIR_P = /bin/mkdir -p
OBJEXT = o
PACKAGE = shore-storage-manager
PACKAGE_BUGREPORT = Noone._Sadly-_this_is_unsupported_software.
PACKAGE_NAME = Shore-Storage-Manager
PACKAGE_STRING = Shore-Storage-Manager 6.0.1
PACKAGE_TARNAME = shore-storage-manager
PACKAGE_URL = 
PACKAGE_VERSION = 6.0.1
PATH_SEPARATOR = :
PERL = /usr/bin/perl
RANLIB = ranlib
RMM = rm
SET_MAKE = 
SHELL = /bin/bash
STRIP = 
VERSION = 6.0.1
abs_builddir = /home/wjy/Tailbench/tailbench/shore/shore-mt/src/fc/tests
abs_srcdir = /home/wjy/Tailbench/tailbench/shore/shore-mt/src/fc/tests
abs_top_builddir = /home/wjy/Tailbench/tailbench/shore/shore-mt
abs_top_srcdir = /home/wjy/Tailbench/tailbench/shore/shore-mt
ac_ct_CC = gcc
ac_ct_CXX = g++
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build_alias = 
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE_TARNAME}
dvidir = ${docdir}
exec_prefix = ${prefix}
host_alias = 
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/wjy/Tailbench/tailbench/shore/shore-mt/config/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = ${datarootdir}/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = 
top_build_prefix = ../../../
top_builddir = ../../..
top_srcdir = ../../..
uname_machine = x86_64

# -*- mode:Makefile -*-
# rules, macros generic to all Makefile.am
AUTOMAKE_OPTIONS = check-news dist-bzip2 readme-alpha

# dewitt-gw, chianti, deathstar
# ActiveTcl no-symbols installed:
TCL_INCLUDE = /scratch/nhall/tcl/include
TCL_LIB = -L/scratch/nhall/tcl/lib -ltcl8.5

# d-12, dewitt-gw:
# ActiveTcl no-symbols installed:
# TCL_INCLUDE = /u/n/h/nhall/tcl/include
# TCL_LIB = -L/u/n/h/nhall/tcl/lib -ltcl8.5

# PURE_DIR = /s/purifyplus-7.0/@sys/
# PURE_DIR = /s/purifyplus/@sys/
PURE_DIR = /s/purifyplus/amd64_rhel5
# PURE_CACHE_DIR = /scratch/nhall/pure
# d-12:
PURE_CACHE_DIR = /tmp/nhall/pure

# --------------------------------------------------------
#
# Local non-standard paths to things are in Makefile.local
#
# --------------------------------------------------------
DISTCLEANFILES = Makefile $(GENFILES)
BUILT_SOURCES = $(GENFILES)
# installdir = $(top_srcdir)/installdir
# docdir = $(installdir)/doc

# --------------------------------------------------------
#
# Initialize  
#
# --------------------------------------------------------

# that the posix-compliant clib interfaces are there (e.g., ctime_r)
# (Actually, you're supposed to get them both with _POSIX_C_SOURCE > 199506L
# but I'm not that trusting.)
ALWAYS_FLAGS = -DNO_FASTNEW -D_REENTRANT -D_POSIX_PTHREAD_SEMANTICS \
	$(am__append_1) $(am__append_2) $(am__append_3) \
	$(am__append_5) $(am__append_6) $(am__append_7) \
	-I$(top_srcdir)/src/atomic_ops $(am__append_8)
# NO_INLINE_FLAGS =  -fno-inline
NO_INLINE_FLAGS = 
#  CC turns on inlining based on optimization level.  at O0 it should
#  do no inlining at less than O3.  There is no way to force inlining to
#  be off (well, +d does except when the optimization level overrides it); 
#  but you can force it to be on.
#NO_INLINE_FLAGS = +d
YES_INLINE_FLAGS = -finline-functions
#YES_INLINE_FLAGS = 
AM_CCASFLAGS = -I$(top_srcdir)/config -I$(top_srcdir)/src/atomic_ops \
	$(am__append_4) $(TARGET_FLAGS)
# GCC/32
#TARGET_FLAGS = -m32 -UARCH_LP64
# TUNE_FLAGS = -mtune=generic
TARGET_FLAGS = -m64 -DARCH_LP64 

# SUN CC/32
##TARGET_FLAGS = -m32 -UARCH_LP64
#TARGET_FLAGS = -m64 -DARCH_LP64
AM_LDFLAGS = -m64
#AM_LDFLAGS = -m64
#AM_LDFLAGS = -m32
#TUNE_FLAGS = -mtune=generic

#TUNE_FLAGS = -mtune=nocona
TUNE_FLAGS = -march=core2 -mtune=core2
##TUNE_FLAGS = -xtarget=native
#TUNE_FLAGS = -xtarget=native
#PEDANTIC = -pedantic-errors  
PEDANTIC = 
LOCALCLEAN = $(am__append_17) $(am__append_20) $(am__append_23)
# CXX flags that go on the compiles for pure products
PURE_CXXFLAGS = $(am__append_18) $(am__append_21) $(am__append_24)
GCC_WARN_FLAGS = $(am__append_9) $(am__append_10) $(am__append_11) \
	$(am__append_12) $(am__append_13)
AM_CXXFLAGS = $(PEDANTIC) $(TUNE_FLAGS) $(DEBUGFLAGS) $(W_WARNINGS) \
	$(OPTFLAGS) $(PURE_CXXFLAGS) $(ALWAYS_FLAGS) $(TEMPLATEFLAGS) \
	-I$(top_srcdir)/src/fc
AM_CFLAGS = $(PEDANTIC) $(ALWAYS_FLAGS) $(DEBUG_FLAGS) $(OPTFLAGS)
ALLCLEANFILES = $(DISTCLEANFILES) \
	       	$(MOSTLYCLEANFILES) \
	       	$(MAINTAINERCLEANFILES) \
	       	$(CLEANFILES) 

W_WARNINGS = $(GCC_WARN_FLAGS) -Wno-deprecated 
GENERIC_NODEBUG_FLAGS = -DNDEBUG -UDEBUG 
GENERIC_YESDEBUG_FLAGS = -UNDEBUG -DDEBUG 

#----------------- GCC  -----------------------------------
# -fstack-check removed because sthread does its own, and sthread/tests/
# thread1 test won't build with this turned on: -fstack-check
SYMBOLSFLAGS = -ggdb

# --------------------------------------------------------
#
# handle --enable-debug config option
#
# --------------------------------------------------------
#----------------- SUN CC -----------------------------------
# SYMBOLSFLAGS = -g -xs -xinstrument=datarace -DTHA_RACE
#SYMBOLSFLAGS = -g -xs 
NOSYMBOLSFLAGS = 
# -g0 turns off inlining
#NOSYMBOLSFLAGS = -g0 
NOOPTFLAGS = -O0 $(NO_INLINE_FLAGS) 
#NOOPTFLAGS = -O0 $(NO_INLINE_FLAGS)
MIDOPTFLAGS = -O2 $(YES_INLINE_FLAGS)
#MIDOPTFLAGS = -O2 $(YES_INLINE_FLAGS)
FULLOPTFLAGS = -O3 -fexpensive-optimizations $(YES_INLINE_FLAGS)
#FULLOPTFLAGS = -xO4
DEBUGFLAGS = $(GENERIC_NODEBUG_FLAGS) \
	$(am__append_14) \
	$(am__append_15)
#DEBUGFLAGS = $(GENERIC_NODEBUG_FLAGS) \
#	$(am__append_14) \
#	$(am__append_15)
#DEBUGFLAGS =  \
#	$(GENERIC_NODEBUG_FLAGS) \
#	$(am__append_14) \
#	$(am__append_15)
#DEBUGFLAGS = $(GENERIC_YESDEBUG_FLAGS) \
#	$(am__append_14) $(am__append_15)
OPTFLAGS = $(FULLOPTFLAGS)
#OPTFLAGS = $(MIDOPTFLAGS)
#OPTFLAGS = $(NOOPTFLAGS)
#OPTFLAGS = $(NOOPTFLAGS)
#OPTFLAGS = $(NOOPTFLAGS)
TEMPLATEFLAGS = 

# --------------------------------------------------------
#
# handle --enable-explicit config option
#
# --------------------------------------------------------
#TEMPLATEFLAGS = -fno-implicit-templates -DEXPLICIT_TEMPLATE

# --------------------------------------------------------

# Initialize LOCALLDADD 
# Note: on solaris -lnsl may be needed for gethostbyname()
LOCALLDADD = $(top_srcdir)/src/atomic_ops/libatomic_ops.a -lnsl \
	$(am__append_16) $(am__append_19) $(am__append_22)

# --------------------------------------------------------
#
# handle --enable-purify config option
#
# --------------------------------------------------------

# PURIFY_INCLUDE = $(PURE_DIR)/include
# no proper installation here, so hack all three of these paths ...
# PURIFY_LIBS = $(PURE_DIR)/lib/libpurify_stubs.a
# PURIFY_BIN = $(PURE_DIR)/bin
# PURIFY_INCLUDE = $(PURE_DIR)/releases/purify.i386_linux2.7.0
#PURIFY_INCLUDE = $(PURE_DIR)/releases/purify.i386_linux2.7.0.0.0-014
# yes, libs are in the same place as is the header file
#PURIFY_LIBS = $(PURIFY_INCLUDE)/lib64/libpurify_stubs.a
#PURIFY_BIN = $(PURE_DIR)/bin
#PURIFY_FLAGS = -g++=yes -cache-dir=$(PURE_CACHE_DIR) -threads=yes -pointer-mask-64=0xfffffffffffffffe
#SUFFIXES = .purecov
#SUFFIXES = .pure
#SUFFIXES = .quant

# --------------------------------------------------------
#
# handle --enable-quantify config option
#
# --------------------------------------------------------

# QUANTIFY_INCLUDE = $(PURE_DIR)/include
# no proper installation here, so hack all three of these paths ...
# QUANTIFY_LIBS = 
# QUANTIFY_BIN = $(PURE_DIR)/bin
#QUANTIFY_INCLUDE = $(PURE_DIR)/releases/quantify.i386_linux2.7.0
# yes, libs are in the same place as is the header file
#QUANTIFY_LIBS = $(QUANTIFY_INCLUDE)/libquantify_stubs.a
#QUANTIFY_BIN = $(PURE_DIR)/bin
#QUANTIFY_FLAGS = -g++=yes \
#	     -copy-fd-output-to-logfile=1,2 \
#	     -ignore-signals=SIGUSR1 \
#	     -threads -thread-stack-change=0x3000 -max_threads=64 \
#	     -cache-dir=$(PURE_CACHE_DIR)

GROFF_OPTIONS = -s -m man -U

# --------------------------------------------------------
#
# handle --enable-purecov config option
#
# --------------------------------------------------------

# PURECOV_INCLUDE = $(PURE_DIR)/include
# no proper installation here, so hack all three of these paths ...
# PURECOV_LIBS = $(PURE_DIR)/lib/libpurecov_stubs.a
# PURECOV_BIN = $(PURE_DIR)/bin
#PURECOV_INCLUDE = $(PURE_DIR)/releases/purecov.i386_linux2.7.0
# yes, libs are in the same place as is the header file
#PURECOV_LIBS = $(PURECOV_INCLUDE)/libpurecov_stubs.a
#PURECOV_BIN = $(PURE_DIR)/bin
#PURECOV_FLAGS = -g++=yes -chain-length=10  -inuse-at-exit \
#	     -first-only -leaks-at-exit -copy-fd-output-to-logfile=1,2 \
#	     -ignore-signals=SIGUSR1 -pointer-mask=0xfffffffe \
#	     -threads -thread-stack-change=0x3000 -max_threads=64 \
#	     -cache-dir=$(PURE_CACHE_DIR)

RESULT_COMPARISON_FILES = stats2-out \
	 box.2-out box.3-out box.4-out \
	 list1-out  darray-out memblock-out

EXTRA_DIST = testall test_stat.dat test_stat.h $(RESULT_COMPARISON_FILES) test_me.h
check_PROGRAMS = list1$(EXEEXT) list2$(EXEEXT) list3$(EXEEXT) \
		hash1$(EXEEXT) hash2$(EXEEXT) \
		ntime$(EXEEXT) \
			darray$(EXEEXT) \
			memblock$(EXEEXT) \
	        heap$(EXEEXT) \
	       	rc$(EXEEXT) \
			errlogtest$(EXEEXT) \
	       	random$(EXEEXT) \
	       	stats$(EXEEXT) \
	       	stats2$(EXEEXT) \
	       	box$(EXEEXT) \
	       	io$(EXEEXT) \
	       	ss$(EXEEXT) \
	       	rand$(EXEEXT) \
	       	container$(EXEEXT) \
	       	cuckoo$(EXEEXT) \
	       	findprime$(EXEEXT) \
	       	findsizes$(EXEEXT) \
	       	bitvector$(EXEEXT) \
	       	basic_sizes$(EXEEXT)

TESTS = testall
LDADD = ../libfc.a  $(LOCALLDADD)
memblock_SOURCES = memblock.cpp
darray_SOURCES = darray.cpp
basic_sizes_SOURCES = basic_sizes.cpp
ss_SOURCES = ss.cpp
list1_SOURCES = list1.cpp
list2_SOURCES = list2.cpp
list3_SOURCES = list3.cpp
hash1_SOURCES = hash1.cpp
hash2_SOURCES = hash2.cpp
ntime_SOURCES = ntime.cpp
heap_SOURCES = heap.cpp
rc_SOURCES = rc.cpp
errlogtest_SOURCES = errlogtest.cpp
random_SOURCES = random.cpp
stats_SOURCES = stats.cpp
stats2_SOURCES = test_stat.cpp stats2.cpp
box_SOURCES = box.cpp
io_SOURCES = io.cpp
rand_SOURCES = rand.cpp
container_SOURCES = container.cpp
findprime_SOURCES = findprime.cpp
findsizes_SOURCES = findsizes.cpp
cuckoo_SOURCES = cuckoo.cpp
bitvector_SOURCES = bitvector.cpp
TEST = testall
TEST_STAT_GENFILES = test_stat_struct_gen.h \
                     test_stat_msg_gen.h \
                     test_stat_collect_enum_gen.h \
                     test_stat_collect_gen.cpp \
                     test_stat_dec_gen.cpp \
                     test_stat_inc_gen.cpp \
                     test_stat_out_gen.cpp

GENFILES = $(TEST_STAT_GENFILES)
MOSTLYCLEANFILES = $(GENFILES)
all: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) all-am

.SUFFIXES:
.SUFFIXES: .purecov .pure .quant .$(OBJEXT) .common .cpp .dvi .fc .html .o .obj .pdf .ps .ssm .sthread .tex
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am $(top_srcdir)/Makefile.generic $(top_srcdir)/Makefile.local $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign src/fc/tests/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign src/fc/tests/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;
$(top_srcdir)/Makefile.generic $(top_srcdir)/Makefile.local:

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):

clean-checkPROGRAMS:
	-test -z "$(check_PROGRAMS)" || rm -f $(check_PROGRAMS)
basic_sizes$(EXEEXT): $(basic_sizes_OBJECTS) $(basic_sizes_DEPENDENCIES) $(EXTRA_basic_sizes_DEPENDENCIES) 
	@rm -f basic_sizes$(EXEEXT)
	$(CXXLINK) $(basic_sizes_OBJECTS) $(basic_sizes_LDADD) $(LIBS)
bitvector$(EXEEXT): $(bitvector_OBJECTS) $(bitvector_DEPENDENCIES) $(EXTRA_bitvector_DEPENDENCIES) 
	@rm -f bitvector$(EXEEXT)
	$(CXXLINK) $(bitvector_OBJECTS) $(bitvector_LDADD) $(LIBS)
box$(EXEEXT): $(box_OBJECTS) $(box_DEPENDENCIES) $(EXTRA_box_DEPENDENCIES) 
	@rm -f box$(EXEEXT)
	$(CXXLINK) $(box_OBJECTS) $(box_LDADD) $(LIBS)
container$(EXEEXT): $(container_OBJECTS) $(container_DEPENDENCIES) $(EXTRA_container_DEPENDENCIES) 
	@rm -f container$(EXEEXT)
	$(CXXLINK) $(container_OBJECTS) $(container_LDADD) $(LIBS)
cuckoo$(EXEEXT): $(cuckoo_OBJECTS) $(cuckoo_DEPENDENCIES) $(EXTRA_cuckoo_DEPENDENCIES) 
	@rm -f cuckoo$(EXEEXT)
	$(CXXLINK) $(cuckoo_OBJECTS) $(cuckoo_LDADD) $(LIBS)
darray$(EXEEXT): $(darray_OBJECTS) $(darray_DEPENDENCIES) $(EXTRA_darray_DEPENDENCIES) 
	@rm -f darray$(EXEEXT)
	$(CXXLINK) $(darray_OBJECTS) $(darray_LDADD) $(LIBS)
errlogtest$(EXEEXT): $(errlogtest_OBJECTS) $(errlogtest_DEPENDENCIES) $(EXTRA_errlogtest_DEPENDENCIES) 
	@rm -f errlogtest$(EXEEXT)
	$(CXXLINK) $(errlogtest_OBJECTS) $(errlogtest_LDADD) $(LIBS)
findprime$(EXEEXT): $(findprime_OBJECTS) $(findprime_DEPENDENCIES) $(EXTRA_findprime_DEPENDENCIES) 
	@rm -f findprime$(EXEEXT)
	$(CXXLINK) $(findprime_OBJECTS) $(findprime_LDADD) $(LIBS)
findsizes$(EXEEXT): $(findsizes_OBJECTS) $(findsizes_DEPENDENCIES) $(EXTRA_findsizes_DEPENDENCIES) 
	@rm -f findsizes$(EXEEXT)
	$(CXXLINK) $(findsizes_OBJECTS) $(findsizes_LDADD) $(LIBS)
hash1$(EXEEXT): $(hash1_OBJECTS) $(hash1_DEPENDENCIES) $(EXTRA_hash1_DEPENDENCIES) 
	@rm -f hash1$(EXEEXT)
	$(CXXLINK) $(hash1_OBJECTS) $(hash1_LDADD) $(LIBS)
hash2$(EXEEXT): $(hash2_OBJECTS) $(hash2_DEPENDENCIES) $(EXTRA_hash2_DEPENDENCIES) 
	@rm -f hash2$(EXEEXT)
	$(CXXLINK) $(hash2_OBJECTS) $(hash2_LDADD) $(LIBS)
heap$(EXEEXT): $(heap_OBJECTS) $(heap_DEPENDENCIES) $(EXTRA_heap_DEPENDENCIES) 
	@rm -f heap$(EXEEXT)
	$(CXXLINK) $(heap_OBJECTS) $(heap_LDADD) $(LIBS)
io$(EXEEXT): $(io_OBJECTS) $(io_DEPENDENCIES) $(EXTRA_io_DEPENDENCIES) 
	@rm -f io$(EXEEXT)
	$(CXXLINK) $(io_OBJECTS) $(io_LDADD) $(LIBS)
list1$(EXEEXT): $(list1_OBJECTS) $(list1_DEPENDENCIES) $(EXTRA_list1_DEPENDENCIES) 
	@rm -f list1$(EXEEXT)
	$(CXXLINK) $(list1_OBJECTS) $(list1_LDADD) $(LIBS)
list2$(EXEEXT): $(list2_OBJECTS) $(list2_DEPENDENCIES) $(EXTRA_list2_DEPENDENCIES) 
	@rm -f list2$(EXEEXT)
	$(CXXLINK) $(list2_OBJECTS) $(list2_LDADD) $(LIBS)
list3$(EXEEXT): $(list3_OBJECTS) $(list3_DEPENDENCIES) $(EXTRA_list3_DEPENDENCIES) 
	@rm -f list3$(EXEEXT)
	$(CXXLINK) $(list3_OBJECTS) $(list3_LDADD) $(LIBS)
memblock$(EXEEXT): $(memblock_OBJECTS) $(memblock_DEPENDENCIES) $(EXTRA_memblock_DEPENDENCIES) 
	@rm -f memblock$(EXEEXT)
	$(CXXLINK) $(memblock_OBJECTS) $(memblock_LDADD) $(LIBS)
ntime$(EXEEXT): $(ntime_OBJECTS) $(ntime_DEPENDENCIES) $(EXTRA_ntime_DEPENDENCIES) 
	@rm -f ntime$(EXEEXT)
	$(CXXLINK) $(ntime_OBJECTS) $(ntime_LDADD) $(LIBS)
rand$(EXEEXT): $(rand_OBJECTS) $(rand_DEPENDENCIES) $(EXTRA_rand_DEPENDENCIES) 
	@rm -f rand$(EXEEXT)
	$(CXXLINK) $(rand_OBJECTS) $(rand_LDADD) $(LIBS)
random$(EXEEXT): $(random_OBJECTS) $(random_DEPENDENCIES) $(EXTRA_random_DEPENDENCIES) 
	@rm -f random$(EXEEXT)
	$(CXXLINK) $(random_OBJECTS) $(random_LDADD) $(LIBS)
rc$(EXEEXT): $(rc_OBJECTS) $(rc_DEPENDENCIES) $(EXTRA_rc_DEPENDENCIES) 
	@rm -f rc$(EXEEXT)
	$(CXXLINK) $(rc_OBJECTS) $(rc_LDADD) $(LIBS)
ss$(EXEEXT): $(ss_OBJECTS) $(ss_DEPENDENCIES) $(EXTRA_ss_DEPENDENCIES) 
	@rm -f ss$(EXEEXT)
	$(CXXLINK) $(ss_OBJECTS) $(ss_LDADD) $(LIBS)
stats$(EXEEXT): $(stats_OBJECTS) $(stats_DEPENDENCIES) $(EXTRA_stats_DEPENDENCIES) 
	@rm -f stats$(EXEEXT)
	$(CXXLINK) $(stats_OBJECTS) $(stats_LDADD) $(LIBS)
stats2$(EXEEXT): $(stats2_OBJECTS) $(stats2_DEPENDENCIES) $(EXTRA_stats2_DEPENDENCIES) 
	@rm -f stats2$(EXEEXT)
	$(CXXLINK) $(stats2_OBJECTS) $(stats2_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/basic_sizes.Po
include ./$(DEPDIR)/bitvector.Po
include ./$(DEPDIR)/box.Po
include ./$(DEPDIR)/container.Po
include ./$(DEPDIR)/cuckoo.Po
include ./$(DEPDIR)/darray.Po
include ./$(DEPDIR)/errlogtest.Po
include ./$(DEPDIR)/findprime.Po
include ./$(DEPDIR)/findsizes.Po
include ./$(DEPDIR)/hash1.Po
include ./$(DEPDIR)/hash2.Po
include ./$(DEPDIR)/heap.Po
include ./$(DEPDIR)/io.Po
include ./$(DEPDIR)/list1.Po
include ./$(DEPDIR)/list2.Po
include ./$(DEPDIR)/list3.Po
include ./$(DEPDIR)/memblock.Po
include ./$(DEPDIR)/ntime.Po
include ./$(DEPDIR)/rand.Po
include ./$(DEPDIR)/random.Po
include ./$(DEPDIR)/rc.Po
include ./$(DEPDIR)/ss.Po
include ./$(DEPDIR)/stats.Po
include ./$(DEPDIR)/stats2.Po
include ./$(DEPDIR)/test_stat.Po

.cpp.o:
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXXCOMPILE) -c -o $@ $<

.cpp.obj:
	$(CXXCOMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CXXDEPMODE) $(depcomp) \
#	$(CXXCOMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	mkid -fID $$unique
tags: TAGS

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	set x; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: CTAGS
CTAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '{ files[$$0] = 1; nonempty = 1; } \
	      END { if (nonempty) { for (i in files) print i; }; }'`; \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

check-TESTS: $(TESTS)
	@failed=0; all=0; xfail=0; xpass=0; skip=0; \
	srcdir=$(srcdir); export srcdir; \
	list=' $(TESTS) '; \
	$(am__tty_colors); \
	if test -n "$$list"; then \
	  for tst in $$list; do \
	    if test -f ./$$tst; then dir=./; \
	    elif test -f $$tst; then dir=; \
	    else dir="$(srcdir)/"; fi; \
	    if $(TESTS_ENVIRONMENT) $${dir}$$tst; then \
	      all=`expr $$all + 1`; \
	      case " $(XFAIL_TESTS) " in \
	      *[\ \	]$$tst[\ \	]*) \
		xpass=`expr $$xpass + 1`; \
		failed=`expr $$failed + 1`; \
		col=$$red; res=XPASS; \
	      ;; \
	      *) \
		col=$$grn; res=PASS; \
	      ;; \
	      esac; \
	    elif test $$? -ne 77; then \
	      all=`expr $$all + 1`; \
	      case " $(XFAIL_TESTS) " in \
	      *[\ \	]$$tst[\ \	]*) \
		xfail=`expr $$xfail + 1`; \
		col=$$lgn; res=XFAIL; \
	      ;; \
	      *) \
		failed=`expr $$failed + 1`; \
		col=$$red; res=FAIL; \
	      ;; \
	      esac; \
	    else \
	      skip=`expr $$skip + 1`; \
	      col=$$blu; res=SKIP; \
	    fi; \
	    echo "$${col}$$res$${std}: $$tst"; \
	  done; \
	  if test "$$all" -eq 1; then \
	    tests="test"; \
	    All=""; \
	  else \
	    tests="tests"; \
	    All="All "; \
	  fi; \
	  if test "$$failed" -eq 0; then \
	    if test "$$xfail" -eq 0; then \
	      banner="$$All$$all $$tests passed"; \
	    else \
	      if test "$$xfail" -eq 1; then failures=failure; else failures=failures; fi; \
	      banner="$$All$$all $$tests behaved as expected ($$xfail expected $$failures)"; \
	    fi; \
	  else \
	    if test "$$xpass" -eq 0; then \
	      banner="$$failed of $$all $$tests failed"; \
	    else \
	      if test "$$xpass" -eq 1; then passes=pass; else passes=passes; fi; \
	      banner="$$failed of $$all $$tests did not behave as expected ($$xpass unexpected $$passes)"; \
	    fi; \
	  fi; \
	  dashes="$$banner"; \
	  skipped=""; \
	  if test "$$skip" -ne 0; then \
	    if test "$$skip" -eq 1; then \
	      skipped="($$skip test was not run)"; \
	    else \
	      skipped="($$skip tests were not run)"; \
	    fi; \
	    test `echo "$$skipped" | wc -c` -le `echo "$$banner" | wc -c` || \
	      dashes="$$skipped"; \
	  fi; \
	  report=""; \
	  if test "$$failed" -ne 0 && test -n "$(PACKAGE_BUGREPORT)"; then \
	    report="Please report to $(PACKAGE_BUGREPORT)"; \
	    test `echo "$$report" | wc -c` -le `echo "$$banner" | wc -c` || \
	      dashes="$$report"; \
	  fi; \
	  dashes=`echo "$$dashes" | sed s/./=/g`; \
	  if test "$$failed" -eq 0; then \
	    col="$$grn"; \
	  else \
	    col="$$red"; \
	  fi; \
	  echo "$${col}$$dashes$${std}"; \
	  echo "$${col}$$banner$${std}"; \
	  test -z "$$skipped" || echo "$${col}$$skipped$${std}"; \
	  test -z "$$report" || echo "$${col}$$report$${std}"; \
	  echo "$${col}$$dashes$${std}"; \
	  test "$$failed" -eq 0; \
	else :; fi

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
	$(MAKE) $(AM_MAKEFLAGS) $(check_PROGRAMS)
	$(MAKE) $(AM_MAKEFLAGS) check-TESTS
check: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) check-am
all-am: Makefile
installdirs:
install: $(BUILT_SOURCES)
	$(MAKE) $(AM_MAKEFLAGS) install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:
	-test -z "$(MOSTLYCLEANFILES)" || rm -f $(MOSTLYCLEANFILES)

clean-generic:

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)
	-test -z "$(DISTCLEANFILES)" || rm -f $(DISTCLEANFILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
	-test -z "$(BUILT_SOURCES)" || rm -f $(BUILT_SOURCES)
clean: clean-am

clean-am: clean-checkPROGRAMS clean-generic clean-local mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am:

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

pdf: pdf-am

pdf-am: pdf-local

ps: ps-am

ps-am:

uninstall-am:

.MAKE: all check check-am install install-am install-strip

.PHONY: CTAGS GTAGS all all-am check check-TESTS check-am clean \
	clean-checkPROGRAMS clean-generic clean-local ctags distclean \
	distclean-compile distclean-generic distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dvi install-dvi-am \
	install-exec install-exec-am install-html install-html-am \
	install-info install-info-am install-man install-pdf \
	install-pdf-am install-ps install-ps-am install-strip \
	installcheck installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic pdf pdf-am pdf-local ps ps-am tags \
	uninstall uninstall-am


# --------------------------------------------------------
#
# add target to create .cvsignore file
#
# --------------------------------------------------------
.cvsignore:  Makefile 
	touch $@
	$(RM) $@
	echo $(ALLCLEANFILES) >& $@

# --------------------------------------------------------
#
# add target to get rid of additional built objects,
#    in particular this is for the PURE targets
#
# --------------------------------------------------------
clean-local: 
	$(RM) $(LOCALCLEAN) 
#.$(OBJEXT).pure:  
#	$(PURIFY_BIN)/purify $(PURIFY_FLAGS)  $(PURIFY_COLLECTOR) $(CXX) -o $@ $< $(LDADD) $(LIBS)
#.$(OBJEXT).quant:  
#	$(QUANTIFY_BIN)/quantify $(QUANTIFY_FLAGS) $(QUANTIFY_COLLECTOR)  $(CXX) -o $@ $< $(LDADD) $(LIBS)

SUFFIXES: .tex .fc .common .sthread .ssm .html .ps .dvi .pdf 

.fc.ps: 
	groff $(GROFF_OPTIONS) -Tps $< > $@

.common.ps: 
	groff $(GROFF_OPTIONS) -Tps $< > $@

.sthread.ps: 
	groff $(GROFF_OPTIONS) -Tps $< > $@

.ssm.ps: 
	groff $(GROFF_OPTIONS) -Tps $< > $@

.fc.html: 
	groff $(GROFF_OPTIONS) -Thtml $< > $@

.common.html: 
	groff $(GROFF_OPTIONS) -Thtml $< > $@

.sthread.html: 
	groff $(GROFF_OPTIONS) -Thtml $< > $@

.ssm.html: 
	groff $(GROFF_OPTIONS) -Thtml $< > $@

.fc.dvi: 
	groff $(GROFF_OPTIONS) -Tdvi $< > $@

.common.dvi: 
	groff $(GROFF_OPTIONS) -Tdvi $< > $@

.sthread.dvi: 
	groff $(GROFF_OPTIONS) -Tdvi $< > $@

.ssm.dvi:
	groff $(GROFF_OPTIONS) -Tdvi $< > $@

.dvi.pdf:
	dvipdfm $<

.tex.dvi:
	latex $<
# second time to get the x-refs
	latex $<

# html-local: $(HTML_TARGETS)

pdf-local: $(PDF_TARGETS)
#.$(OBJEXT).purecov:  
#	$(PURECOV_BIN)/purecov $(PURECOV_FLAGS)  $(PURECOV_COLLECTOR) $(CXX) -o $@ $< $(LDADD) $(LIBS)

$(RESULT_COMPARISON_FILES) : noop

noop:
testall:  $(check_PROGRAMS)

test_stat.$(OBJEXT): $(TEST_STAT_GENFILES)
stats.$(OBJEXT):  $(TEST_STAT_GENFILES)

$(TEST_STAT_GENFILES): test_stat.dat
	$(PERL) $(top_srcdir)/tools/stats.pl $?

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
