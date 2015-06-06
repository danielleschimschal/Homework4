#include <iostream>
using namespace std;


void Swap(int *pFirst, int * pSecond);


int main(){
	int lownum = 0;
	int number[] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	for (int i = 0; i < 7; i++){
		for (int i = 0; i < 7; i++){
			if (number[i] > number[i + 1])
			{
				Swap(&number[i], &number[i + 1]);
				lownum = number[i];
			}
		}
	}cout << lownum << endl;
}

void Swap(int *pFirst, int *pSecond){
	int Temp = *pFirst;
	*pFirst = *pSecond;
	*pSecond = Temp;
}