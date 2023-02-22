all: main.o list.o
	cc main.o list.o -o main

main.o: main.c list.h
	cc -c main.c

list.o: list.c list.h
	cc -c list.c


clean:
	rm *.o
	rm main
