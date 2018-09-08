#include "../include/sort.hpp"

///All functions will recieve a pointer to first element of the vector and other to the last one.
///Pls use the std::end and std::begin function to slast the pointers.


void selection_sort(int * first, int * last){}

void insertion_sort(int * first, int * last){}

void bubble_sort(int * first, int * last){}

void merge_sort(int * first, int * last){
	int * mid;
	if (first < last){
		mid = first + ((distance(first, last)-1)/2);
		//cout << endl << mid << " -> " << "Mid pos: " << last - mid << endl;
		merge_sort(first, mid);
		merge_sort(mid+1, last);
		merge(first, last, mid);
	}
}

void quick_sort(int * first, int * last, int * pivot){}


///Function that partitions your vector.
void partition(int * first, int * last){}

///merge itens to give a vector with a center value for merge sorting
void merge(int * first, int * last, int * middle){
	//aloc the aux vector
	int * tmp_vector = (int*) malloc( distance(first, last) * sizeof(int));

	int * inicio_1(first);
	int * inicio_2(middle+1);
	int count(0);

	while(inicio_1 <= middle && inicio_2 <= last){
		if (*inicio_1 < *inicio_2){
			tmp_vector[count++] = *(inicio_1++);
		}else{
			tmp_vector[count++] = *(inicio_2++);
		}
	}

	while(inicio_1 <= middle){
		tmp_vector[count++] = *(inicio_1++);
	}

	while(inicio_2 <= last){
		tmp_vector[count++] = *(inicio_2++);
	}

	
	cout << endl << "tmp: " << endl;
	for(int i(0); first <= last; first++, i++){
		*first = tmp_vector[i];
		cout << tmp_vector[i] << " ";
	}
	cout << endl << endl;


	delete [] tmp_vector;
}

///Function that swap values in pointers
void swapper(int * x, int * y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}