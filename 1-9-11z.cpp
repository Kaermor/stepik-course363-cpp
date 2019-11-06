#include <iostream>
#include <cmath>

using namespace std;

int IsPrime(int n) {
	int i = 2;
	while (n % i != 0 && i <= sqrt(n))
	{
		++i;
	}
	
	return i;
}

void foo_1_9_11z() {
	int n;
	cin >> n;
	(n%IsPrime(n) == 0 && n !=2) ? cout << "NO" : cout << "YES";
}