//
// Created by grey on 24.10.2019.
//

#include <iostream>

using namespace std;

void foo_1_8_9z(){
    int n, m;
    cin >> n >> m;
    int a[1000][1000];
    int b[1000][1000];
    for (int i = 0; i < n * m; ++i) {
        cin >> a[i/m][i%m];
    }
//    cout << "Transpon B" << endl;
    for (int i = 0; i < n * m; ++i) {
        b[i/n][i%n] = a[i%n][i/n];
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
