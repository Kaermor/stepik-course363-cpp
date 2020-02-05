//
// Created by grey on 1/22/20.
//

#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

void foo_1_10_9z(){
    string s, s1;
    int cnt = 0, sig = 0;
    int okt=0;
    getline(cin, s);
    s = s + '.'; // additional point
    cout << s << endl;
    stringstream ss(s); //new stream
    while (getline(ss, s1, '.')){ //split by dot
//        cout << "s1 = " << s1 << endl;
//        cout << "s1.length() = " << s1.length() << endl;
        if (s1.length() ==0 || s1.length() > 3){ //limitation of length of substr
            sig = 1;
            break;
        }
        ++cnt;
        for (auto c:s1){ //each simbol check in substr
            if (c < '0' || c > '9'){
                sig = 1;
                break;
            }
        }
        if(sig != 1){ //substr to int
            okt = stoi(s1, 0, 10);
        }
        else{
            break;
        }
//
//        cout << "stoi(s1) = " << okt << endl;
        if (okt < 0 || okt > 255){ //check of oktet value
            sig = 1;
            break;
        }
//        if (s1 < "0" || s1 > "255"){
//            sig = 1;
//        }

    }
//    cout << cnt << " " << sig << endl;
    if (cnt != 4 || sig == 1){ //output
        cout << "NO";
    }
    else{
        cout << "YES";
    }



}