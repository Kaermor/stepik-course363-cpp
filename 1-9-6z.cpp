#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInSquare(double x, double y) {
	return abs(x) + abs(y) <= 1;
}

void foo_1_9_6z() {
	double x, y;
	cin >> x >> y;
	IsPointInSquare(x, y) ? cout << "YES" : cout << "NO";
}