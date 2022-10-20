CC = gcc
CFLAGS = -Wall -g -c
OBJS = phoneBookMain.o register.o delete.o print.o search.o
INCLUDE= -I.
LIBS =-L. -lm
all : main

%.o: %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
main: $(OBJS)
	$(CC) -o main $(OBJS) $(LIBS)
clean:
	rm -f main $(OBJS)

