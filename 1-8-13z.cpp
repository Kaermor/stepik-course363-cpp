//
// Created by grey on 27.10.2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

void foo_1_8_13z() {
    int n, m, a[100][100], k=1, x1=0, y1=0, j, i;
    cin >> n >> m;
    while (k <= n*m) {
        j = x1;
        i = y1;
        while (j >= 0 && i < n) {
            a[i][j] = k;
            i++;
            j--;
            k++;
        }
        if (x1 < m-1){
            x1++;
        }
        else{
            y1++;
        }

    }

    //output
    for (int i1 = 0; i1 < n; ++i1) {
        for (int j1 = 0; j1 < m; ++j1) {
            cout << setw(4) << a[i1][j1];
        }
        cout << endl;
    }
}