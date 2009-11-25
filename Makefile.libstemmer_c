include mkinc.mak
CFLAGS=-Iinclude
all: libstemmer.a stemwords
libstemmer.a: $(snowball_sources:.c=.o)
	$(AR) -cru $@ $^
stemwords: examples/stemwords.o libstemmer.a
	$(CC) -o $@ $^
clean:
	rm -f stemwords *.o *.a src_c/*.o runtime/*.o libstemmer/*.o
maintainer-clean: clean
install:
distdir:
	cp -pR . "$(distdir)"