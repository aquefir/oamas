##############################################################################
##                                  OAMAS™                                  ##
##                                                                          ##
##                         Copyright © 2020 Aquefir                         ##
##                       Released under BSD-2-Clause.                       ##
##############################################################################

ifeq ($(strip $(AQ)),)
$(error "AQ was not found in your environment. You need to install the Slick Makefiles from github.com/aquefir/slick to continue.")
endif

# Target APE only
TP := APE

include $(AQ)/lib/slick/base.mk

# name of project. used in output binary naming
PROJECT := oamas

# put a ‘1’ for the desired target types to compile
EXEFILE := 1
SOFILE  :=
AFILE   :=

# space-separated path list for #includes
# <system> includes
INCLUDES := include
# "local" includes
INCLUDEL := src

# space-separated library name list
LIBS    :=
LIBDIRS :=

# ‘3P’ are in-tree 3rd-party dependencies
# 3PLIBDIR is the base directory
# 3PLIBS is the folder names in the base directory for each library
3PLIBDIR := 3rdparty
3PLIBS   :=

# frameworks (macOS target only)
FWORKS :=

# sources
SFILES    :=
CFILES    := \
	src/chalkboard/main.c \
	src/oam.c
CPPFILES  :=
PUBHFILES := \
	include/oam/base.h \
	include/oam/ver.h
PRVHFILES :=

# test suite sources
TES_CFILES    :=
TES_CPPFILES  :=
TES_PUBHFILES :=
TES_PRVHFILES :=

APE_LDSCR := etc/cosmo/ape.lds
APE_AFILE := etc/cosmo/cosmopolitan.a
APE_HFILE := etc/cosmo/cosmopolitan.h
APE_APEO  := etc/cosmo/ape.o
APE_CRTO  := etc/cosmo/crt.o

# this defines all our usual targets
include $(AQ)/lib/slick/targets.mk
