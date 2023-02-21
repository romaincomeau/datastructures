all: main

main: linked_list.o
	cc linked_list.o -o linked_list


linked_list.o: linked_list.c linked_list.h
	cc -c linked_list.c

clean:
	rm *.o
	rm linked_list
