CC = gcc
CFLAGS = -Wall -g -c
INCLUDE= -I.
LIBS =-L. -lm

OBJS = hw7Main.o sort.o register.o delete.o print.o search.o
all : main

%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
main: $(OBJS)
	$(CC) -o main $(OBJS) $(LIBS)
clean:
	rm -f main $(OBJS)

