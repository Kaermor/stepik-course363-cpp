#include <iostream>

using namespace std;

int main() {

    double a, b, c, d, e, f, x, y;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;

    x = (e*d - b*f) / (d*a - b*c);
    y = (a*f - e*c) / (d*a - b*c);

 
    cout << x << " " << y << endl;
}