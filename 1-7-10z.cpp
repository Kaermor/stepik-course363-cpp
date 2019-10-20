//
// Created by Graver on 20.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_10z(){
    int n, cnt = 1;
    cin >> n;
    vector<int> a(n);
    //input and processing
    cin >> a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        if (a[i] != a[i-1]){
            cnt += 1;
        }
    }
    //output
    cout << cnt;
}
