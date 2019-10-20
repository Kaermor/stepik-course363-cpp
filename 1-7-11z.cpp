//
// Created by Graver on 20.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_11z(){
    int n, tmp;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    //processing
    for (int j = 1; j < n; j = j + 2) {
        cout << "j=" << j;
        tmp = a[j];
        a[j] = a[j-1];
        a[j-1] = tmp;
    }
    //output
    for (int k = 0; k < n; ++k) {
        cout << a[k] << " ";
    }
}