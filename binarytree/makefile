all: main.o btree.o
	cc main.o btree.o -o main

main.o: main.c btree.h
	cc -c main.c

btree.o: btree.c btree.h
	cc -c btree.c

clean:
	find . -name "*.o" -delete
	rm main
