#include "../include/sort.h"

///All functions will recieve a pointer to first element of the vector and other to the last one.
///Pls use the std::end and std::begin function to slast the pointers.


void selection_sort(int * first, int * last){
	for (first != last; first++){
		
	}
}

void insertion_sort(int * first, int * last){}

void bubble_sort(int * first, int * last){}

void merge_sort(int * first, int * last){}

void quick_sort(int * first, int * last, int * pivot){
	swapper(pivot, last);
	cout << endl << endl << *pivot;
	for (first != last; first++){
		
	}
}


///Function that partitions your vector.
void partition(int * first, int * last){
	last--;
	last--;
	while(last >= first){
		while(*first < *last && ){

		}

	}
}

///Function that swap values in pointers
void swapper(int * x, int * y){
	int aux;
	aux = x;
	*x = *y;
	*y = aux;
}