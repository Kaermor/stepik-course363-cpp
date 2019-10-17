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
    //processing
    for (int j = 0; j < n; j++) {
        int num_min = j;
        for (int i = j; i < a.size(); i++) {
            if (a[i] < a[num_min]) {
                num_min = i;
            }
        }
        int temp;
        temp = a[j];
        a[j] = a[num_min];
        a[num_min] = temp;
    }
    //output
    for (auto now : a){
         cout << now << " ";
    }

}
