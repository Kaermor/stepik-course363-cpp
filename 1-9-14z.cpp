#include <iostream>

using namespace std;

int fib(int n) {
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}

void foo_1_9_14z() {
	int n;
	cin >> n;
	cout << fib(n);
}