#include <iostream>

using namespace std;

int min(int a, int b) {
	if (b > a)
	{
		return a;
	}
	else
	{
		return b;
	}
}


int min4(int a, int b, int c, int d) {
	if (min(c, d) > min(a, b))
	{
		return min(a, b);
	}
	else
	{
		return min(c, d);
	}
}

void foo_1_9_3z() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min4(a, b, c, d);
}