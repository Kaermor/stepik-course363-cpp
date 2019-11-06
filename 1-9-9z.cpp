#include <iostream>

using namespace std;

double power(double a, int n) {

	if (n == 0)
	{
		return 1;
	}

	n > 0 ? a = a * power(a, n-1) : a = power(a, n+1) / a;
	return a;
}

void foo_1_9_9z() {
	double a;
	int n;
	cin >> a >> n;
	cout << power(a, n);
}