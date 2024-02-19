#include <iostream>
using namespace std;

void init(int* pointer, int size) {
	for (int i = 0; i < size; i++)
	{
		cin >> *(pointer + i);
	}
}

void print(int* pointer, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << *(pointer + i) << " ";
	}
}

int get_max(int* pointer, int size) {
	int max = *pointer;

	for (int i = 1; i < size; i++)
	{
		if (*(pointer + i) > max) {
			max = *(pointer + i);
		}
	}

	return max;
}

int main() {
	int size = 5;

	int* pArray = new int[size];

	init(pArray, size);
	
	for (int i = 0; i < size; i++)
	{
		cout << *pArray << " ";
		pArray++;
	}

	//delete[] pArray;

	return 0;
}