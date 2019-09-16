#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double a, b, c, d, x1, x2;
    cin >> a;
    cin >> b;
    cin >> c;
    d = b*b - 4*a*c;

    if (d > 0) {
        x1 = ((-b) - sqrt(d))/(2*a);
        x2 = ((-b) + sqrt(d))/(2*a);
        if (x1 < x2){
            cout << x1 << " " << x2 << endl;
        }
        else{
            cout << x2 << " " << x1 << endl;
        }
    }
    else if (d == 0) {
        cout << (-b)/(2*a) << endl;
    }
    else if (d<0) {
        return 0;
    }

    return 0;
}
