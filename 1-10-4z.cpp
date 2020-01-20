//
// Created by grey on 1/20/20.
//

#include <iostream>
using namespace std;


void foo_1_10_4z(){
    char c;
    cin >> c;
    cout << (c >= 'a' && c <= 'z' ? c = c - 'a' + 'A' : c);
}