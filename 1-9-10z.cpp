#include <iostream>
#include <cmath>

using namespace std;

int MinDivisor(int n) {
	int i = 2;
	while (n%i != 0 && i <= sqrt(n))
	{
		++i;
	}
	n % i == 0 ? i : i = n;
	return i;
}

void foo_1_9_10z() {
	int n;
	cin >> n;
	cout << MinDivisor(n);
}