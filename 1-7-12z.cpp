//
// Created by Graver on 20.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void  foo_1_7_12z(){
    int n, tmp;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    tmp = a[n-1];
    for (int j = n-1; j > 0 ; --j) {
        a[j] = a[j-1];
    }
    a[0] = tmp;
    for (int k = 0; k < n; ++k) {
        cout << a[k] << " ";
    }
}
