//
// Created by grey on 18.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_7z(){
    int n;
    cin >> n;
    vector <int> a(n);
    //input
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    //processing and output
    for (int j = 0; j < n-1; ++j) {
        if (a[j]*a[j+1] > 0){
            //instead, possible to use min(a.b) and max(a.b)
            if (a[j] <= a[j+1]) {
                cout << a[j] << " " << a[j + 1];
            }
            else {
                cout << a[j+1] << " " << a[j];
            }
            break;
        }
    }
}
