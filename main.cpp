#include "include/sort.hpp"

int main(int argc, char const *argv[]){

	int Vet[] = {1, 3, 2, 4, 6, 5, 8, 7, 9};

	cout << endl << "Before: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl << endl;

	merge_sort(begin(Vet), end(Vet));

	cout << endl << "After: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl << endl;


	return 0;
}