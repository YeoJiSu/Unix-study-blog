CC = gcc
CFLAGS = -Wall -g -c
OBJS = hw6Main.o sort.o register.o delete.o print.o search.o
INCLUDE= -I.
LIBS =-L. -lm
all : main

%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
main: $(OBJS)
	$(CC) -o main $(OBJS) $(LIBS)
clean:
	rm -f main $(OBJS)

