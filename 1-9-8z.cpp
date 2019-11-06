#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInArea(double x, double y) {
	return ((sqrt(pow(x + 1, 2) + pow(y - 1, 2)) <= 2)&&(y >= -x)&&(y >= 2*x + 2)) || ((sqrt(pow(x + 1, 2) + pow(y - 1, 2)) >= 2) && (y <= -x) && (y <= 2 * x + 2));
}

void foo_1_9_8z() {
	double x, y;
	cin >> x >> y;
	IsPointInArea(x, y) ? cout << "YES" : cout << "NO";
}