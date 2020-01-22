//
// Created by grey on 1/21/20.
//

#include <iostream>
//#include <string>

using namespace std;

void foo_1_10_8z(){
    string s;
    int p1 = 0, p2 = 0, dl = 0, pos = 0, np = 0;
    getline(cin, s);
    s = " " + s + " ";
    cout << s << endl;
    for (ulong i = 0; i < s.size(); ++i) {
        if (s[i] == ' '){
            p1 = p2;
            p2 = i;
        }
        if (p2 - p1 > dl){
            dl = p2-p1;
            pos = p1;
        }
//        cout << p1 << "-" << p2  << "-" << dl << endl;
    }
    cout << pos << endl;
    cout << dl << endl;
    cout << s.substr(pos+1, dl-1);
}
