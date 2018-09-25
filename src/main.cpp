#include "../include/sort.hpp"
#include "../include/generic_pointer.hpp"

int main(int argc, char const *argv[]){

	int Vet[] = {3, 2, 2, 5, 7, 7, 4, 7, 7, 7, 7, 5, 6, 6, 6, 7, 7, 7, 7, 7};

	cout << endl << "Before: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl;
	
	//selection_sort(begin(Vet), end(Vet));

	//quick_sort(begin(Vet), end(Vet) - 1);

	//merge_sort(begin(Vet), end(Vet) - 1);

	//generic_swap( begin(Vet), end(Vet) - 1, sizeof(Vet[0]));

	//auto s = generic_min( begin(Vet), end(Vet) - 1, sizeof(Vet[0]));
	//cout << endl << "Generic min returned: "<< *static_cast<int *>(s) << endl;

	cout << endl << "After: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl;

	return 0;
}