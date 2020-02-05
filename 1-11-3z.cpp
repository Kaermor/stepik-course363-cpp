//
// Created by grey on 2/5/20.
//

#include <iostream>
#include <set>

using namespace std;

void foo_1_11_3z(){
    set <int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;
}