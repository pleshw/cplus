#ifndef SORTING_EDB
#define SORTING_EDB

#include <iostream>
#include <iterator>
#include <algorithm>
#include <cstdlib>

using namespace std;


///All functions will recieve a pointer to first element of the vector and other to the last one.
///Pls use the std::end and std::begin function to slast the pointers.
//////IMPORTANT: Remember that std::end() function pointer to the first element after its array

void selection_sort(int * first, int * last);

void insertion_sort(int * first, int * last);

void bubble_sort(int * first, int * last);

///make merge sorting of itens in a vector recursively
void merge_sort(int * first, int * last);
///Merge itens putting what is less than the center to the left and what is more than to the right
void merge(int * first, int * last, int * middle);


void quick_sort(int * first, int * last, int * pivot);
///Function that partitions your vector.
///Partition: push the elements that are lower than the pivot to his left and put the greaters to the right
int * partition(int * first, int * last);

void swapper(int * x, int * y);



#endif