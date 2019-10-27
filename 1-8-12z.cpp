//
// Created by grey on 25.10.2019.
//

#include <iostream>

using namespace std;

void foo_1_8_12z(){
    int n, m, a[30][30];
    char sp = ' ';
    cin >> n >> m;
    for (int i = 0; i < n * m; ++i) {
        if((i/m)%2 == 0){
            a[i/m][i%m] = (i + 1);
        }
        else{
            a[i/m][i%m] = (m*(i/m + 1)  - i%m);
        }
        if (i%m == 0 && i != 0) {
            cout << endl;
        }
        if (a[i/m][i%m] <= 9){
            cout << "   " << a[i/m][i%m];
        }
        else{
            cout << "  " << a[i/m][i%m];
        }

    }
//    cout << "sp" << sp*2 << "sp";
//Можно использовать для указания ширины поля вывода:
//1)    printf("%4d", arr[i][j]);
//2)    cout.width(3);
//3)    cout << massif[i][j] << " ";
//4)    cout << setw(4) << array[i][j]; //  #include <iomanip>
}
