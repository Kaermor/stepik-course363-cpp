#include <iostream>

using namespace std;

void foo_1_8_6z()
{
    int n, m, i1, j1, tmp;
    int a[100][100];
    cin >> n >> m;
    //input
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }

    }
    cin >> i1 >> j1;
    //processing
    for (int i = 0; i < n; ++i) {
        tmp = a[i][i1];
        a[i][i1] = a[i][j1];
        a[i][j1] = tmp;
    }
    //output
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
        }
    cout << endl;
    }
}