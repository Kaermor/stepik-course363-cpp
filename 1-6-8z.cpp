#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int n;
    double x, a, p, ps=0;
    cin >> n;
    
    cin >> x; 
    while (n != -1){ 
        cin >> a;
        p=a*(pow(x,n));
        n--;
        ps=ps+p;

    }

    //cout << setprecision(11) << fixed;
    cout << ps << endl;
    return 0;
}
