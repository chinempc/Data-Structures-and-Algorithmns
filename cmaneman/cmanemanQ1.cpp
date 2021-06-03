#include<iostream>

using namespace std;

void fib(int, int, int);

int main()
{
	int num1 = 0, num2 = 1, n;

	cout << "This program will invoke the Fibonacci sequence in Java\n\n";
	cout << "How many times would like the program to perform the sequence: ";

	cin >> n;

	cout << "You chose: " << n << " times\n\n";

	fib(num1,num2,n);


}

void fib(int n1, int n2, int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum = n1 + n2;

		cout << "Data: " << n1 << " + " << n2 << " = " << sum << endl<<endl;

		n1 = n2;
		n2 = sum;
	}

}