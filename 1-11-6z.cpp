//
// Created by grey on 2/12/20.
//

#include <iostream>
#include <set>

using namespace std;

void foo_1_11_6z(){
    set <int> s1, s2;
    int n1, n2, x;

    cin >> n1;
    for (int i = 0; i < n1; ++i){
        cin >> x;
        s1.insert(x);
    }
    cin >> n2;
    for (int j = 0; j < n2; ++j) {
        cin >> x;
        if(!s1.insert(x).second) s2.insert(x);
    }
    for (auto now : s2) {
        cout << now << ' ';
    }
}