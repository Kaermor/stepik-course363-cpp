#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double n, sum, k;
    cin >> n;
    while (n != 0){
        sum = sum + n;
        k++;
        cin >> n;

    }
    cout << setprecision(11) << fixed;
    cout << sum/k << endl;
    return 0;
}
