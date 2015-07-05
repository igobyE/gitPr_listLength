#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "List.h"

void printArr (int* arr, int s) {
	for (int i=0; i<s; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

//	Generate a random array. arr = {x | 1 <= x <= 100}
int* makeArr (int size) {
	int* arr = new int[size];
	for (int i=0; i<size; ++i) {
		arr[i] = rand() % 100 + 1;
	}

	return arr;
}

int main () {
	std::cout << "START\n";

	srand (time (NULL));
	int size = 20;
	int* arr = makeArr (size);
	printArr (arr, size);

	List<int> aList = List<int>();
	for (int i=0; i<size; ++i) {
		aList.insert (arr[i]);
	}

	std::cout << "list size = " << aList.getSize () << std::endl;

	aList.print ();


	return 0;
}