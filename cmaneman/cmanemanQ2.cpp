#include<iostream>

using namespace std;
//This program will use recursion and dynamic programming...

void DynFib(int[], int, int, int);

int main()
{
	const int ARRSIZE = 13;
	int numArr[ARRSIZE] = {0, 1, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
	int i = 1;
	int sum = 0;

	DynFib(numArr, ARRSIZE, i, sum);

	return 0;
}

void DynFib(int Narr[], int size, int i, int sum)
{
	if (i == 0)
	{
		sum = 0;
	}
	
	if (i < 12)
	{
		
		sum = Narr[i - 1] + Narr[i];

		cout << "Iteration " << i << ": " << Narr[i - 1] << " + " << Narr[i] << " = " << sum << endl;

		Narr[i + 1] = sum;
		i++;

		DynFib(Narr, size, i, sum);
	}
}