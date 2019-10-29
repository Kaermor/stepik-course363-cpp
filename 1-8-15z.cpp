//
// Created by grey on 28.10.2019.
//

#include <iostream>
#include <iomanip>

using namespace std;

void foo_1_8_15z(){
    int n, m, k=1, x=0, y=0, a[100][100] = {};
    cin >> n >> m;
    int n1 = n, m1 = m;
    while (k <= n1*m1) { // increasing number
        //go to right
        for (int i = 0; i < m; ++i) {
            a[y][x] = k;
            ++k;
            if (k > n1*m1) break;
            ++x;
        }
        if (k > n1*m1) break;
        ++y;
        --x;
        --m;
        //go to down
        for (int j = 0; j < n-1; ++j) {
            a[y][x] = k;
            ++k;
            if (k > n1*m1) break;
            ++y;
        }
        if (k > n1*m1) break;
        --y;
        --x;
        --n;
        //go to left
        for (int i = 0; i < m; ++i) {
            a[y][x] = k;
            ++k;
            if (k > n1*m1) break;
            --x;
        }
        if (k > n1*m1) break;
        ++x;
        --y;
        --m;
        //go to up
        for (int j = 0; j < n-1; ++j) {
            a[y][x] = k;
            ++k;
            if (k > n1*m1) break;
            --y;
        }
        ++y;
        ++x;
        --n;
    }
    //output
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < m1; ++j) {
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }

}
