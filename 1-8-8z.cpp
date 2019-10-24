//
// Created by grey on 24.10.2019.
//

#include <iostream>

using namespace std;

void foo_1_8_8z()
{
    int n, k, j1=0, i1 = 0;
    cin >> n;
    int a[10][10];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    cin >> k;
    if (k >= 0) {
        for (int i = k; i < n; ++i) {
            cout << a[i][j1] << " ";
            ++j1;
        }
    }
    else
    {
        for (int j = abs(k); j < n; ++j) {
            cout << a[i1][j] << " ";
            ++i1;
        }
    }
}
