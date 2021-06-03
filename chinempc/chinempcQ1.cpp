#include <iostream>
#include <string>
using namespace std;

int fib(int n) {
	if (n == 1 || n == 2) 
		return 1;
	return fib(n-1) + fib(n-2);
}

int main() {
	cout << "The 4th fib is: " << fib(4) << endl;
	cout << "The 5th fib is: " << fib(5) << endl;

	return 0;
}
