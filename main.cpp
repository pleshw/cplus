#include "include/sort.hpp"

int main(int argc, char const *argv[]){

	int Vet[] = {1, 3, 5, 4, 6, 2, 8, 7, 9, 10};

	cout << endl << "Before: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl << endl;
	
	quick_sort(begin(Vet), end(Vet)-1, begin(Vet)+2);

	cout << endl << "After: " << endl;
	for(auto i(0); i < distance(begin(Vet), end(Vet)); i++){
		cout << Vet[i] << " ";
	}
	cout << endl << endl;


	return 0;
}