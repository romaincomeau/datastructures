# makefile structure
# target: prerequisites
# 	recipes

all: main.o list.o
	cc main.o list.o -o main

test: test/list_ut.o list.o
	cc list.o list_ut.o -o list.ut

list_ut.o: list.c list.h test/list_ut.c
	cc -c test/list_ut.c

main.o: main.c list.h
	cc -c main.c

list.o: list.c list.h
	cc -c list.c


clean:
	find . \( -name "*.o" -o -name "*.ut" -o -name "main" \) -delete
