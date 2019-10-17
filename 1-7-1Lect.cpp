//
// Created by grey on 17.10.2019.
//
#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_1Lect(){
    int n;
    cin >> n;
    vector <int> a;
    //input
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > 0){
            a.push_back(temp);
        }
    }
    //output
    for (int i = a.size() - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}
