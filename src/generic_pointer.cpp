#include "../include/generic_pointer.hpp"



///Generic Filters

bool int_isSmall(const void * a, const void * b){
	int compA = *(int*)a;
	int compB = *(int*)b;
	if( compA < compB) return true;
	return false;
}

///Generic searchs
bool int_findFirst(const void * n){
	float compA = *(float*)n;
	int   compB = int(*(float*)n);
	if(compA == compB){
		return true;
	} 
	return false;
}



///SOME SELF EXPLANATION (OR JUST A EXPLANATION IF IT'S NOT ME READING THIS):
//-generic pointers deal with memory(damn)
//-so we need to know the size of the blocks we are moving or copying etc
//-this way we can have a idea of where we need to move our pointer

//-here the pointers usually(or always i don't know yet) move one byte each time
//-this way we have a better control where they are and we can deal with any type of variable or block of memory

//-the idea is move the pointer n*size to place them in the spot we want 
//-where n  is the position in that block we want
//--ex: int vector[n]	//each block in this vector (vector[0], vector[1]... vector[n]) have a int size
//--so we cant go to the position 3 'jumping' 3*sizeof(int) bytes from the 0 position in the vector
//-----visual:(imagine this is the vector in memory) [{block size}, {block size}, {block size} ... {block size}]
//-----each block represents a position in the vector, so if we want got from the first to the n position
//-----we will need that our pointer that walk one byte for 'step' walk n*(the block size) times

//CODE BELOW:


void generic_swap(void * n1, void * n2, size_t size){
	byte aux[size];//aux is a block of memory with size equals to size
	memcpy( aux,  n1, size );//aux gets n1
	memcpy(  n1,  n2, size );//n1 gets n2
	memcpy(  n2, aux, size );//n2 gets aux(that have n1 value) 
}


void * generic_min(void * first, void * last, size_t size, Filter filter){
	byte * smallest = static_cast< byte *> (first);
	byte * forward  = static_cast< byte *> (first);
	forward+=size;
	while(forward <= last){
		if(filter(forward ,smallest)){
			smallest = forward;
		}
		forward+=size;
	}
	return smallest;
}


void generic_reverse(void * first, void * last, size_t size){
	byte * forward  = static_cast< byte *> (first);
	byte * backward = static_cast< byte *> (last);
	while(forward <= backward){
		generic_swap(forward, backward, size);
		forward +=size; 
		backward-=size;
	}
}


void * generic_copy(void * first, void * last, void * d_first, size_t size){
	byte * forward   = static_cast< byte *> (first);
	byte * d_forward = static_cast< byte *> (d_first);
	while(forward <= last){
		memcpy(d_forward, forward, size);
		forward   += size;
		d_forward += size;
	}
	return (d_forward-size);
}

void * generic_clone(void * first, void * last, size_t size){
	byte * forward       = static_cast< byte *> (first);
	byte * backward      = static_cast< byte *>  (last);
	byte * clone         = new byte[size * (backward - forward)];
	byte * it_clone      = clone;
	while(forward <= last){
		memcpy(it_clone, forward, size);
		forward  += size;
		it_clone += size;
	}
	return clone;
}


void * generic_find_if(void * first, void * last, size_t size, Search s){
	byte * forward = static_cast< byte *> (first);
	while(!s(forward)){
		forward+=size;
	}
	return forward;
}