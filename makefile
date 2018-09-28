CC            = g++
CPPFLAGS      = -Wall -std=c++11
PROG          = all_tests
_ALL_OBJS     = all_tests.o generic_pointer.o sort.o

build: $(_ALL_OBJS)
	$(CC) $(_ALL_OBJS) -o $(PROG)
	rm -rf build/*.o
	mv *.o build/

all_tests.o:
	$(CC) -c src/all_tests.cpp $(CPPFLAGS)

generic_pointer.o: include/generic_pointer.hpp
	$(CC) -c src/generic_pointer.cpp $(CPPFLAGS)
#$(CC) src/generic_pointer.cpp -o generic_pointer  $(CPPFLAGS)

sort.o: include/sort.hpp
	$(CC) -c src/sort.cpp $(CPPFLAGS)
#$(CC) src/sort.cpp -o sort  $(CPPFLAGS)