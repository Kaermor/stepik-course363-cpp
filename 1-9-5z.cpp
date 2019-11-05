#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInSquare(double x, double y) {
	return ((x >= -1 && x <= 1) && (y >= -1 && y <= 1));
}

void foo_1_9_5z() {
	double x, y;
	cin >> x >> y;
	IsPointInSquare(x, y) ? cout << "YES" : cout << "NO";
}