#include "include/sort.hpp"

int main(int argc, char const *argv[]){

	int Vet[] = {1, 2, 3, 4, 5};

	cout << endl << "Before: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl << endl;
	
	//selection_sort(begin(Vet), end(Vet));

	quick_sort(begin(Vet), end(Vet) - 1);

	cout << endl << "After: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl << endl;


	return 0;
}