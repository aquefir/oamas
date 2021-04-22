##############################################################################
##                                  OAMAS™                                  ##
##                                                                          ##
##                         Copyright © 2021 Aquefir                         ##
##                       Released under BSD-2-Clause.                       ##
##############################################################################

ifeq ($(strip $(AQ)),)
$(error "AQ was not found in your environment. You need to install the Slick Makefiles from github.com/aquefir/slick to continue.")
endif

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
LIBS    := uni_log uni_err uni_himem GLFW
LIBDIRS :=

# ‘3P’ are in-tree 3rd-party dependencies
# 3PLIBDIR is the base directory
# 3PLIBS is the folder names in the base directory for each library
3PLIBDIR :=
3PLIBS   :=

# frameworks (macOS target only)
FWORKS :=

# sources
SFILES    :=
CFILES    := \
	src/chalkboard/main.c \
	src/display.c \
	src/eventer.c \
	src/fbg_glfw.c \
	src/fbgraphics.c \
	src/glad.c \
	src/oam.c
CPPFILES  :=
PUBHFILES := \
	include/oam/base.h \
	include/oam/colspace.h \
	include/oam/display.h \
	include/oam/eventer.h \
	include/oam/ver.h
PRVHFILES := \
	src/display.h \
	src/eventer.h \
	src/fbg_glfw.h \
	src/fbgraphics.h \
	src/glad.h \
	src/khrplatform.h

# test suite sources
TES_CFILES    :=
TES_CPPFILES  :=
TES_PUBHFILES :=
TES_PRVHFILES :=

# this defines all our usual targets
include $(AQ)/lib/slick/targets.mk
