CC = g++
CPPFLAGS = -Wall -std=c++11
PROG = main
OBJS = main.o generic_pointer.o sort.o

build: $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c src/main.cpp

generic_pointer.o: include/generic_pointer.hpp
	$(CC) -c src/generic_pointer.cpp $(CPPFLAGS)

sort.o: include/sort.hpp
	$(CC) -c src/sort.cpp $(CPPFLAGS)

clean:
	rm -rf build/*.o
	mv *.o build
	
mrproper: clean
	rm -rf main

