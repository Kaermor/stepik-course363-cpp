//
// Created by grey on 24.10.2019.
//

#include <iostream>
//#include <string>

using namespace std;

void foo_1_8_7z()
{
    int n;
    string cnt = "YES";
    cin >> n;
    int a[10][10];
    //input
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (a[i][j] != a[j][i])
            {
                cnt = "NO";
            }
        }
    }
    cout << cnt;
}