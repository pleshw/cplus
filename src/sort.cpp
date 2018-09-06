#include "../include/sort.hpp"

///All functions will recieve a pointer to first element of the vector and other to the last one.
///Pls use the std::end and std::begin function to slast the pointers.


void selection_sort(int * first, int * last){}

void insertion_sort(int * first, int * last){}

void bubble_sort(int * first, int * last){}

void merge_sort(int * first, int * last){
	int * mid;
	if (first < last - 1){
		mid = first + (distance(first, last)/2);
		cout << endl << mid - first << endl;
		merge_sort(first, mid);
		merge_sort(mid+1, last);
		merge(first, last);
	}
}

void quick_sort(int * first, int * last, int * pivot){}


///Function that partitions your vector.
void partition(int * first, int * last){}

///merge itens to give a vector with a center value for merge sorting
void merge(int * first, int * last){

	//size of the vector
	int size(distance(first, last) - 1);

	//begin and end of vector	
	int * inicio_1(first);
	int * fim_2(last);

	//declare the count to middle of the vector
	int meio(size/2);

	//end of part 1, and begin of part two of vector
	int * fim_1(first+meio);
	int * inicio_2(fim_1+1);

	int * tmp_vector = (int*) malloc(sizeof(int) * size);
	int tmp_cont(0);

	while(inicio_1 <= fim_1 && inicio_2 <= fim_2){
		if (*inicio_1 <= *inicio_2){
			tmp_vector[tmp_cont++] = *inicio_1++;
		}else{
			tmp_vector[tmp_cont++] = *inicio_2++;
		}
	}
	while(inicio_1 <= fim_1){
		tmp_vector[tmp_cont++] = *inicio_1++;
	}
	while(inicio_2 <= fim_2){
		tmp_vector[tmp_cont++] = *inicio_2++;
	}
	int copy_cont(0);
	while(first <= last){
		*first++ = tmp_vector[copy_cont++];
	}
	delete [] tmp_vector;
}

///Function that swap values in pointers
void swapper(int * x, int * y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}