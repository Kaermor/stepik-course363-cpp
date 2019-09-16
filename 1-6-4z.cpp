#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, x, y, z;
    cin >> p >> x >> y;
    cout << trunc(((x*100 + y) * p/100 + x*100 + y)/100) << " ";
    z = (((x*100 + y) * p/100 + x*100 + y)/100 - trunc(((x*100 + y) * p/100 + x*100 + y)/100))*100;
    cout << trunc(z+0.001);
    return 0;
}
