#include <iostream>
using namespace std;

int main(){
	int *x;
	int count;
	double sum = 0;
	double average;
	int numberHigher = 0;

	cout << "How many numbers are you finding the average of? ";
	cin >> count;

	x = new int[count];

	for (int i = 0; i < count; i++){
		cout << "Number: ";
		cin >> x[i];
		sum += x[i];
	}

	average = sum / count;
	cout << "Average is " << average << endl;

	for (int i = 0; i < count; i++){
		if (x[i] > average)
			numberHigher++;
	}

	cout << "There is/are " << numberHigher << " number(s) greater than the average." << endl;

	delete[] x;
}
