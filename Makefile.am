ACLOCAL_AMFLAGS = -I ../fintp_utils/m4

AM_CPPFLAGS = -DUNIX -DDEBUG_ENABLED	\
-I$(FINTP_HOME)/fintp_utils/src	\
@CPPFLAGS@	\
@PTHREAD_CFLAGS@	\
@XERCES_CPPFLAGS@	\
@BOOST_CPPFLAGS@

lib_LTLIBRARIES = libfintp_log.la

AUTOMAKE_OPTIONS = foreign

libfintp_log_la_LDFLAGS = @LIBS@ @LDFLAGS@	\
@PTHREAD_LIBS@	\
@XERCES_LDFLAGS@ -lxerces-c	\
@BOOST_LDFLAGS@	-lboost_system	\
-L$(FINTP_HOME)/fintp_utils/.libs -lfintp_utils

libfintp_log_la_SOURCES = src/AbstractLogPublisher.cpp	\
src/AppExceptions.cpp	\
src/LogManager.cpp	\
src/LogPublisher.cpp	\
src/SyslogPublisher.cpp	\
src/Trace.cpp

nobase_include_HEADERS = src/AbstractLogPublisher.h	\
src/AppExceptions.h	\
src/LogManager.h	\
src/LogPublisher.h	\
src/SyslogPublisher.h	\
src/Trace.h

SUBDIRS = .
