//
// Created by grey on 22.10.2019.
//

#include <iostream>

using namespace std;

void foo_1_8_4z(){
    int n;
    cin >> n;
    char a[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == j || j == n/2 || i == n/2 || i + j == n - 1){
                a[i][j] = '*';
            }
            else {
                a[i][j] = '.';
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
