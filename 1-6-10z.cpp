#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double a, b, c, d, x1, x2;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a==0 && b==0 && c==0){
        cout << 3 << endl;
        return 0;
    }
    else if(a==0 && b==0 && c!=0){
        cout << 0 << endl;
        return 0;
    }
    else if(a==0 && c==0 && b!=0){
        cout << 1 << " " << 0 << endl;
        return 0;
    }
    else if(a==0 && c!=0 && b!=0){
        cout << 1 << " " << (-c)/b << endl;
        return 0;
    }   
    d = b*b - 4*a*c;


    if (d > 0) {
        x1 = ((-b) - sqrt(d))/(2*a);
        x2 = ((-b) + sqrt(d))/(2*a);
        if (x1 < x2){
            cout << 2 << " " << x1 << " " << x2 << endl;
        }
        else{
            cout << 2 << " " << x2 << " " << x1 << endl;
        }
    }
    else if (d == 0) {
        cout << 1 << " " << (-b)/(2*a) << endl;
    }
    else if (d<0) {
        cout << 0 << endl;
        return 0;
    }

    return 0;
}
