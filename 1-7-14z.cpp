//
// Created by Graver on 20.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_14z(){
    int n, cnt = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        cnt = 0;
        for (int j = 0; j < n; ++j) {
            if ((a[i] == a[j]) && (i != j)){
                cnt++;
            }

        }
        if (cnt == 0){
            cout << a[i] << " ";
        }
    }
}
