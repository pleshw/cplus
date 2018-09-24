#include <iostream>
#include <cstring>

using byte = unsigned char;

void swap( void * initialP, size_t size, unsigned int n1, unsigned int n2 ){
	byte aux[size];

	byte * first = static_cast< byte * > ( initialP ); //convert first in a pointer that move one byte in memory and have f[0] position

	memcpy( aux, first+(n1*size), size );//aux gets n1
	memcpy( first+(n1*size), first+(n2*size), size );//n1 gets n2
	memcpy( first+(n2*size), aux, size );//n2 gets aux(that have n1 value) 
}

//n*size because every block of memory on vector have this size in bytes
//so when we wanna move the pointer to block n 
//we go n*size times to the direction of that block