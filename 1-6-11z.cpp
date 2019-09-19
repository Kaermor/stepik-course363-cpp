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

    if (b == 0 and a !=0){
        x = e/a;
        y = (f - c*x)/d;
    }
    else if (a == 0 and  b != 0){
        y = e/b;
        x = (x - d*y)/c;
    }
    else if (d == 0 and c != 0){
        x = f/c;
        y = (e - a*x)/b;
    }
    else if (c == 0 and d != 0){
        y = f/d;
        x = (e - b*y)/a;
    }
    else{
        x = (b*f - d*e)/(b*c - d*a);
        y = (e - a*x)/b;
    }
 
    cout << x << " " << y << endl;
}