all: main.o linked_list.o
	cc main.o linked_list.o -o main

main.o: main.c linked_list.h
	cc -c main.c

linked_list.o: linked_list.c linked_list.h
	cc -c linked_list.c


clean:
	rm *.o
	rm main
