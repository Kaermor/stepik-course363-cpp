//
// Created by grey on 17.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_3z(){
    int n;
    cin >> n;
    vector <int> a;
    //input
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    //output
    for (int i = 0; i < n; i += 2){
        cout << a[i] << " ";
    }
}
