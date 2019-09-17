#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double a, b, c, d, e, f, x, y;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    x = (b*f - d*e)/(b*c - d*a);
    y = (e - a*x)/b;

    cout << x << " " << y << endl;
}