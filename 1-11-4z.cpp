//
// Created by grey on 2/5/20.
//

#include <iostream>
#include <set>

using namespace std;

void foo_1_11_4z(){
    set <int> s;
    int n, x;
    cin >> n;
    while (cin >> x){
        if (s.find(x) == s.end()){
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
        s.insert(x);
    }

}