#include <iostream>
using namespace std;

int main() {
	int size;

	do {
		cout << "Enter size of array: ";
		cin >> size;
	} while (size <= 0);

	int* pArray = new int[size];
	

	for (int i = 0; i < size; i++)
	{
		cin >> *(pArray + i);
	}

	for (int i = 0; i < size; i++)
	{
		cout << *(pArray + i) << " ";
	}

}