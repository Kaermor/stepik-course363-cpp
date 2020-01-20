//
// Created by grey on 1/20/20.
//

#include <iostream>
//#include <string>

using namespace std;

void foo_1_10_7z(){
    string s;
    auto ans = "yes";
    getline(cin, s);
    for (ulong i = 0; i < s.size(); ++i) {
        cout << s[i] << "=" << s[s.size()-i-1] << endl;
        if (s[i] != s[s.size()-i-1]){
            ans = "no";
            break;
        }

    }
    cout << ans;
}
