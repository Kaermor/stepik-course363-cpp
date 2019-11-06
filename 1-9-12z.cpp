#include <iostream>
#include <cmath>

using namespace std;

double power(double a, int n) {
	if (n == 0)
	{
		return 1;
	}
	else if (n % 2 == 0) {
		return power(a * a, n / 2);
	}
	else {
		return a * power(a, n - 1);
	}

	//n > 0 ? a = a * power(a, n - 1) : a = power(a, n + 1) / a;
	//return a;
}

void foo_1_9_12z() {
	double a;
	int n;
	cin >> a >> n;
	cout << power(a, n);
}