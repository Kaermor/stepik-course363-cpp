//
// Created by grey on 1/20/20.
//

#include <iostream>
using namespace std;


void foo_1_10_5z(){
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z'){
        c = c - 'a' + 'A';
    }
    else if (c >= 'A' && c <= 'Z'){
        c = c - 'A' + 'a';
    }
    cout << c;
}
