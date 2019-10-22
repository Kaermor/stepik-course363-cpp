//
// Created by grey on 22.10.2019.
//

#include <iostream>

using namespace std;

void foo_1_8_3z(){
    int n, m, tmp, x, y;
    cin >> n >> m;
    int a[n][m] = {};
    //input, processing and output
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            if (i==0 && j==0){
                tmp = a[i][j];
                x = i;
                y = j;
            }
            if (a[i][j] > tmp){
                tmp = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << x <<  " " << y << endl;
    //output mass
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";

        }
        cout << endl;
    }
}