#ifndef SORTING_EDB
#define SORTING_EDB

#include <iostream>
#include <iterator>
#include <algorithm>
#include <cstdlib>

using namespace std;

void selection_sort(int * first, int * last);

void insertion_sort(int * first, int * last);

void bubble_sort(int * first, int * last);

void merge_sort(int * first, int * last);

void quick_sort(int * first, int * last);

void partition(int * first, int * last);

void swapper(int * x, int * y);

void merge(int * first, int * last, int * middle);

#endif