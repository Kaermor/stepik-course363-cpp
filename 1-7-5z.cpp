//
// Created by grey on 18.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_5z(){
    int n, sh = 0;
    cin >> n;
    vector<int> a(n);
    //input, processing
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > 0){
            sh++;
        }
    }
    //output
    cout << sh;
}
