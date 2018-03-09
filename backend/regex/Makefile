#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for backend/regex
#
# IDENTIFICATION
#    src/backend/regex/Makefile
#
#-------------------------------------------------------------------------

subdir = src/backend/regex
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

OBJS = regcomp.o regerror.o regexec.o regfree.o regprefix.o regexport.o

include $(top_srcdir)/src/backend/common.mk

# mark inclusion dependencies between .c files explicitly
regcomp.o: regcomp.c regc_lex.cl regc_color.cl regc_lex.cl regc_cvec.cl \
        regc_locale.cl regc_pg_locale.cl

regexec.o: regexec.c rege_dfa.cl
