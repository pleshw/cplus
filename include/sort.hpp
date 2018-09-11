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
/////////////// functions like quick sort that use the last element as pivot can fail if the pointer is 

void selection_sort(int * first, int * last);

void insertion_sort(int * first, int * last);

void bubble_sort(int * first, int * last);

///make merge sorting of itens in a vector recursively
void merge_sort(int * first, int * last);
///Merge itens putting what is less than the center to the left and what is more than to the right
void merge(int * first, int * meio, int * last);


void quick_sort(int * first, int * last);
///Function that partitions your vector.
///Partition: push the elements that are lower than the pivot to his left and put the greaters to the right
int * partition(int * first, int * last);

void swapper(int * x, int * y);

///Select the first the middle and the last positions in a vector and return the medio term.
int * medio(int * first, int * last);

#endif