//
// Created by grey on 24.10.2019.
//

#include <iostream>

using namespace std;

void foo_1_8_10z(){
    int n, m, k, cnt, nmb = 0;
    cin >> n >> m;
    int a[20][20];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    cin >> k;
    for (int i = 0; i < n; ++i) {
        cnt = 0;
        for (int j = 0; j < m; ++j) {
            if (a[i][j] == 0) {
                cnt++;
                if(cnt >= k) {
                    break;
                }
            }
            else cnt=0;
        }
        if(cnt >= k){
            nmb = i+1;
            break;
        }
    }
    cout << nmb;
}
