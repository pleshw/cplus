#include "../include/sort.hpp"


void selection_sort(int * first, int * last){}

void insertion_sort(int * first, int * last){}

void bubble_sort(int * first, int * last){}




void quick_sort(int * first, int * last, int * pivot){
	swapper(pivot, last);
	if (first < last){
		int * sub_pivot = partition(first, last);
		quick_sort(first, sub_pivot-1, sub_pivot-1);
		quick_sort(sub_pivot+1, last, last);
	}
}
//return a pointer to the pivot position in the vector after the partition
int * partition(int * first, int * last){
	int * pivot(last);
	int * starter(last-1);
	while(starter >= first){
		//push the pointer to the first element that are greater or equal to the pivot
		while(*first < *pivot && starter >= first){
			first++;
		}
		//push the pointer to the first element that are lower or equal to the
		while(*starter > *pivot && starter >= first){
			starter--;
		}
		//if the first greater and the first lower are not in their position they swap
		if (starter >= first){
			swapper(starter, first);
		} 
	}
	swapper(first, pivot);
	return first;
}




void merge_sort(int * first, int * last){
	int * mid;
	if (first < last){
		mid = first + ((distance(first, last)-1)/2);
		merge_sort(first, mid);
		merge_sort(mid+1, last);
		merge(first, last, mid);
	}
}
void merge(int * first, int * last, int * middle){

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

	for(int i(0); first <= last; first++, i++){
		*first = tmp_vector[i];
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