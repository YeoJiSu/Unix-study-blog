CC=gcc
LIBNAME=libmycalc
LIB=$(LIBNAME).so.1.0
CFLAGS= -Wall 
OBJS1 = sum.o mult.o div.o
OBJS2 = main.o
INCDIR=.
LIBDIR=.
all: main

$(LIB): $(OBJS1)
	$(CC) -fPIC -shared -Wl,-soname=$(LIBNAME).so.1 $(OBJS1) -o $@ -lc
	ln -s $(LIBNAME).so.1.0 $(LIBNAME).so
	ln -s $(LIBNAME).so.1.0 $(LIBNAME).so.1	

%.o: %.c
	$(CC) -fPIC -c $(CFLAGS) -I$(INCDIR) -o $@ $<

main: $(LIB) $(OBJS2)
	$(CC) -o main $(OBJS2) -L$(LIBDIR) -lmycalc

clean:
	-rm -rf $(OBJS1) $(OBJS2) $(LIB) $(LIBDIR)/$(LIBNAME).so*