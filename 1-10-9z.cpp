//
// Created by grey on 1/22/20.
//

#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

void foo_1_10_9z(){
//new variant char by char
//    string s, s1;
//    int cnt = 0, sig = 0;
//    int okt;
//    char c;
//    getline(cin, s);
//    s = s + '.';
//    okt = stoi
//    for (int i = 0; i < ; ++i) {
//
//    }
//    cout << cnt << " " << sig << endl;
//    if (cnt != 4 || sig == 1){
//        cout << "NO";
//    }
//    else{
//        cout << "YES";



//    old
    string s, s1;
    int cnt = 0, sig = 0;
    int okt=0;
    getline(cin, s);
    s = s + '.';
    cout << s << endl;
    stringstream ss(s);
    while (getline(ss, s1, '.')){
//        cout << "s1 = " << s1 << endl;
//        cout << "s1.length() = " << s1.length() << endl;
        if (s1.length() ==0 || s1.length() > 3){
            sig = 1;
            break;
        }
        ++cnt;
        for (auto c:s1){
            if (c < '0' || c > '9'){
                sig = 1;
                break;
            }
        }
        if(sig != 1){
            okt = stoi(s1, 0, 10);
        }
        else{
            break;
        }
//
//        cout << "stoi(s1) = " << okt << endl;
        if (okt < 0 || okt > 255){
            sig = 1;
            break;
        }
//        if (s1 < "0" || s1 > "255"){
//            sig = 1;
//        }

    }
//    cout << cnt << " " << sig << endl;
    if (cnt != 4 || sig == 1){
        cout << "NO";
    }
    else{
        cout << "YES";
    }



}