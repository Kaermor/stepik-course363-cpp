#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double x, sum=0, sum2=0, n=0, z;
    cin >> x; //ввод последовательности
    while (x != 0){ 
        sum = sum + x; //сумма элементов
        sum2 = sum2 + x*x; // сумма квадратов элементов
        n++; //количество элементов
        cin >> x;

    }
    z = sqrt((sum2 - (sum*sum/n))/(n-1));
    cout << setprecision(11) << fixed;
    cout << z << endl;
    return 0;
}
