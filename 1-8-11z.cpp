//
// Created by grey on 25.10.2019.
//

#include <iostream>

using namespace std;

void foo_1_8_11z(){
    int n, m, a[100][100];
    cin >> n >> m;
    //input
    for (int i = 0; i < n * m; ++i) {
        cin >> a[i/m][i%m];
    }
    //processing and output
    for (int j = 0; j < m; ++j) {
        for (int i = n-1; i >= 0; --i) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}