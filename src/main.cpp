#include "../include/sort.hpp"
#include "../include/generic_pointer.hpp"

int main(int argc, char const *argv[]){

	float Vet[] = {0.3, 1.5, 2, 3, 4, 5, 6, 7, -3};
	//int d_Vet[9];

	cout << endl << "Before: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << "  ";
	}
	cout << endl;
	
	//selection_sort(begin(Vet), end(Vet));

	//quick_sort(begin(Vet), end(Vet) - 1);

	//merge_sort(begin(Vet), end(Vet) - 1);

	//generic_swap( begin(Vet), end(Vet) - 1, sizeof(Vet[0]));

	// Filter filter = int_isSmall;
	// auto s = generic_min( begin(Vet), end(Vet) - 1, sizeof(Vet[0]), filter);
	// cout << endl << "Generic min returned: "<< *static_cast<float *>(s) << endl;

	//generic_reverse( begin(Vet), end(Vet) - 1, sizeof(Vet[0]));

	// int * do_it = (int*)(generic_copy(begin(Vet), end(Vet) - 1, begin(d_Vet), sizeof(Vet[0])));
	// cout << endl << "d_Vet[]: " << endl;
	// for(auto i(0); i < distance(begin(d_Vet), end(d_Vet)); i++){
	// 	cout << d_Vet[i] << " ";
	// }
	// cout << endl;
	// cout << endl << "Last d_Vet[] element: " << *do_it << endl;

	
	// Search s = int_findFirst;
	// auto   f = generic_find_if(begin(Vet), end(Vet) - 1, sizeof(Vet[0]), s);
	// cout << endl << "Generic find_if returned to int_findFirst search: "<< *static_cast<float *>(f) << endl;


	cout << endl << "After: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << "  ";
	}
	cout << endl;

	return 0;
}