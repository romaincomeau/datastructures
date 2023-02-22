all: main.o tree.o
	cc main.o tree.o -o main

main.o: main.c tree.h
	cc -c main.c

tree.o: tree.c tree.h
	cc -c tree.c

clean:
	find . -name "*.o" -delete
	rm main
