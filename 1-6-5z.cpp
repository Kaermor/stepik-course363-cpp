#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double p, x, y, z0 = 0, z1 = 0;
    int k;
    cin >> p >> x >> y >> k;
    while (k != 0){

        z0 = trunc(((x*100 + y) * p/100 + x*100 + y)/100);
        z1 = trunc(((((x*100 + y) * p/100 + x*100 + y)/100 - trunc(((x*100 + y) * p/100 + x*100 + y)/100))*100)+0.001);
        x = z0;
        y = z1;
        k--;
    }

    cout << z0 << " " << z1 << endl;
    return 0;
}
