CC=g++
linked-list: linked-list.o
	$(CC) -o linked-list linked-list.o

linked-list.o: linked-list.cpp
	$(CC) -c -o linked-list.o linked-list.cpp

clean: linked-list linked-list.o
	rm linked-list
	rm linked-list.o
