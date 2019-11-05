#include <iostream>
#include <cmath>

using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r) {
	return sqrt(pow(x-xc, 2) + pow(y-yc, 2)) <= r;
}

void foo_1_9_7z() {
	double x, y, xc, yc, r;
	cin >> x >> y >> xc >> yc >> r;
	IsPointInCircle(x, y, xc, yc, r) ? cout << "YES" : cout << "NO";
}