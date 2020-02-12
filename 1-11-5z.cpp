//
// Created by grey on 2/11/20.
//

#include <iostream>
#include <set>

using namespace std;


void foo_1_11_5z(){
    set <int> s1, s2;
    int n1, n2, x;

    cin >> n1;
    for (int i = 0; i < n1; ++i){
        cin >> x;
        s1.insert(x);
        s2.insert(x);
    }
    cin >> n2;
    for (int j = 0; j < n2; ++j) {
        cin >> x;
        s2.insert(x);
    }
//    for (auto now : s1){
//        cout << now << " ";
//    }
//    cout << endl;
//    for (auto now : s2){
//        cout << now << " ";
//    }
//    cout << endl;
    cout << n1 + n2 - s2.size(); //crazy but accepted as soluton


}