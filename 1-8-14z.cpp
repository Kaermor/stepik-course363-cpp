//
// Created by grey on 28.10.2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

void foo_1_8_14z(){
    int n, m, a[100][100] = {}, x, k = 1;
    cin >> n >> m;
    //processing
    for (int i = 0; i < n; ++i) {
        if (i%2 == 0) { //important, when odd and even numbers of columns!!!
            x = 0;
        } else {
            x = 1;
        }
        for (int j = x; j < m; j+=2) {
            a[i][j] = k++;
        }
     }
    //output
    for (int i = 0; i < n; ++i) {
        for (int j1 = 0; j1 < m; ++j1) {
            cout << setw(4) << a[i][j1];
        }
        cout << endl;
    }
}
