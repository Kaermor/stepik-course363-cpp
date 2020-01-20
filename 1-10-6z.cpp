//
// Created by grey on 1/20/20.
//

#include <iostream>
//#include <string>

using namespace std;

void foo_1_10_6z(){
    string s;
    int cnt=0;
    getline(cin, s);
    for (auto c : s) {
        if ( c== ' ') cnt++;
    }
    cout << cnt+1;
}