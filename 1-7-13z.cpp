//
// Created by Graver on 20.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_13z(){
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (a[i] == a[j]){
                cnt++;
            }

        }
    }
    cout << cnt;
}