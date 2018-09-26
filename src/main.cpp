#include "../include/sort.hpp"
#include "../include/generic_pointer.hpp"

int main(int argc, char const *argv[]){

	int Vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
	//int d_Vet[9];

	cout << endl << "Before: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl;
	
	//selection_sort(begin(Vet), end(Vet));

	//quick_sort(begin(Vet), end(Vet) - 1);

	//merge_sort(begin(Vet), end(Vet) - 1);

	//generic_swap( begin(Vet), end(Vet) - 1, sizeof(Vet[0]));

	// Filter_min filter = int_isSmall;
	// auto s = generic_min( begin(Vet), end(Vet) - 1, sizeof(Vet[0]), filter);
	// cout << endl << "Generic min returned: "<< *static_cast<int *>(s) << endl;

	//generic_reverse( begin(Vet), end(Vet) - 1, sizeof(Vet[0]));

	// int * do_it = (int*)(generic_copy(begin(Vet), end(Vet) - 1, begin(d_Vet), sizeof(Vet[0])));
	// cout << endl << "d_Vet[]: " << endl;
	// for(auto i(0); i < distance(begin(d_Vet), end(d_Vet)); i++){
	// 	cout << d_Vet[i] << " ";
	// }
	// cout << endl;
	// cout << endl << "Last d_Vet[] element: " << *do_it << endl;

	

	cout << endl << "After: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl;

	return 0;
}