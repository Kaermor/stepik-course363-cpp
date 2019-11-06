#include <iostream>
#include <cmath>

using namespace std;

int summu() {
	int n;
	cin >> n;
	int ss = 0;
	if (n !=0)
	{
		ss = ss + n + summu();
	}
	return ss;
}

void foo_1_9_13z() {
	cout << summu();
}