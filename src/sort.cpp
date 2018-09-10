#include "../include/sort.hpp"


void selection_sort(int * first, int * last){
	int * aux(first); //control pointer
	int * lowerValue(first); //lower value
	
	//if theres no range to compare the array is already ordered
	if (first == last) return;

	//aux runs the vector and compare any element to the actual lower
	while(aux <= last){
		//if there's a element lower than the actual lower the lower pointer goes for it
		if (*aux < *lowerValue){
			lowerValue = aux;
		}
		aux++;
	}
	//swap the actual lower with the element in first position
	swapper(first, lowerValue);
	//calls the function again but with the next pos as first position
	selection_sort(first+1, last);
}

void insertion_sort(int * first, int * last){}

void bubble_sort(int * first, int * last){}




void quick_sort(int * first, int * last){
	//if theres not a range to be partitioned this block is already ordered
	if (first < last){ 
		//////may improve the time of execution
		//////find a term that is the medium value of first last and middle element in the array
		//////int * pivot = medio(first, last); 
		//////swapper(pivot, last);
		//partition the vector and put the pivot in its position in the array
		int * center = partition(first, last);
		//do the same but with the block of elements that are lower than pivot
		//and the block of greater elements
		quick_sort(first, center-1);
		quick_sort(center+1, last);
	}
}
//return a pointer to the pivot position in the vector after the partition
int * partition(int * first, int * last){
	int * a(first);
	int * b(last-1);

	//cout << endl << endl << " ----------------------------------" 
	//<< endl << endl << "[]: ";
	//for(auto i(first); i <= b; i++) 
	//	cout << *i << " ";

	//cout << " Pivot: " << *last << endl << endl;

	while(b >= a){
//----------------------------------------------------------------------------------------------------
		//push the pointer to the first element that are greater or equal to the pivot
		while(*a <= *last && b >= a){	
			//cout << " a --> " << *a << endl;
			a++;
		}
		//cout << " a --> " << *a << endl << endl;
//----------------------------------------------------------------------------------------------------
		//push the pointer to the first element that are lower or equal to the pivot
		while(*b >= *last && b >= a){
			//cout << " b --> " << *b << endl;
			b--;
		}
		//cout << " b --> " << *b << endl;
//----------------------------------------------------------------------------------------------------
		//if the first greater and the first lower are not in their position they swap
		//and if b still in range of the array
		if (*b >= *a && b >= first){
			//cout << "swap(a, b)" << endl;
			swapper(a, b);
		}
//----------------------------------------------------------------------------------------------------	
	}
	//cout << endl << "swap(a, pivot)" << endl;
	swapper(a, last);
	//cout << endl << "[]: ";
	//for(auto i(first); i <= last; i++) 
	//	cout << *i << " ";
	return a;
}


void merge_sort( int * first, int * last){

}

void merge( int * first, int *  last){
	
}



///Function that swap values in pointers
void swapper(int * x, int * y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
}




int * medio(int * first, int * last){
	int * a = first;
	int * b = first + ((distance(first, last)/2) - 1);
	int * c = last;
	if ((*a > *b && *a < *c) || (*a > *c && *a < *b)) return a;
	if ((*b > *a && *b < *c) || (*b > *c && *b < *a)) return b;
	if ((*c > *b && *c < *b) || (*c > *b && *c < *b)) return c;
	if (*a == *b) return a;
	if (*a == *c) return a;
	if (*b == *c) return b;

	return b;
}