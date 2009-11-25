lib_LTLIBRARIES = lib_mysqludf_stem.la
lib_mysqludf_stem_la_SOURCES = lib_mysqludf_stem.cc
lib_mysqludf_stem_la_CXXFLAGS = -DSTANDARD -DMYSQL_SERVER @MYSQL_CFLAGS@
lib_mysqludf_stem_la_LDFLAGS = -module -avoid-version -no-undefined -L$(CURDIR)/libstemmer_c -lstemmer

SUBDIRS = libstemmer_c
EXTRA_DIST = test *.sql API Makefile.libstemmer_c

.PHONY : test

mrproper:
	make clean
	make maintainer-clean
	rm -rf config.guess config.h.* config.status configure missing config.sub ltmain.sh depcomp aclocal.m4 install.sh config.log compile Makefile.in doc/html *.loT mkinstalldirs install-sh *~

show-ld:
	echo $(lib_mysqludf_xql_la_LDFLAGS)

installdb: 
	$(MYSQL) < ./installdb.sql

uninstalldb: 
	$(MYSQL) < ./uninstalldb.sql
	
dist-hook:
	find $(distdir) -name .svn -o -name .DS_Store -o -name .cdtproject -o -name .project -o -name .settings | xargs --no-run-if-empty rm -rf

test: 
	for i in `ls test/*.result | awk -F "." '{print $$1}'`; do echo "$$i"; $(MYSQLTEST) --result-file=$$i.result < $$i.test; done

test-generate: 
	for i in `ls test/*.test | awk -F "." '{print $$1}'`; do echo "$$i"; $(MYSQLTEST) --result-file=$$i.result --record < $$i.test; done

test-clean:
	rm test/*.log test/*.reject