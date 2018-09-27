#ifndef GENERIC_POINTER_HPP
#define GENERIC_POINTER_HPP

#include <iostream>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef unsigned char byte;

//filters
using Filter = bool (*)(const void *, const void *);
bool  int_isSmall   (const void *  a, const void * b);

//Search
using Search = bool (*)(const void *);
bool  int_findFirst (const void * n);

//generic functions
void   generic_swap    (void *    n1, void *   n2, size_t size);
void * generic_min     (void * first, void * last, size_t size, Filter filter);
void   generic_reverse (void * first, void * last, size_t size);
void * generic_copy    (void * first, void * last, void * d_first, size_t size);
void * generic_clone   (void * first, void * last, size_t size);
void * generic_find_if (void * first, void * last, size_t size, Search s);

#endif