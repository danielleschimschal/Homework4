#include <iostream>
using namespace std;

int* alloc_array(int size)
{
	int* pintarray = new int[size];
	for (int i = 0; i < size; i++)
		pintarray[i] = 42; 
	return pintarray;
}

int* doubleCapacity(const int* list, int size){
	int* pintarray = new int[size*2];
	for (int i = 0; i < size*2; i++)
		pintarray[i] = 42;
	return pintarray;
}

int main(){
	int* array = alloc_array(10);
	for (int i = 0; i < 10; ++i)
		cout << array[i] << endl;
	delete[] array;

	int* largerarray = doubleCapacity(alloc_array(10), 20); 
	for (int i = 0; i < 20; i++)
		cout << largerarray[i] << endl;
	delete[] largerarray; 
}