//
// Created by grey on 18.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_6z(){
    int n;
    cin >> n;
    vector <int> a(n);
    //input
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    //processing and output
    for (int j = 1; j < n; ++j) {
        if (a[j] > a[j-1]){
            cout << a[j] << " ";
        }
    }
}
