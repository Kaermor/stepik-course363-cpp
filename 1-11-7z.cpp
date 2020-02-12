//
// Created by grey on 2/12/20.
//

#include <iostream>
#include <map>
#include <string>

using namespace std;

void foo_1_11_7z(){
    int n;
    string x, y;
    map <string, string> mymap;
    cin >> n;
    while (n--){
        cin >> x;
        cin >> y;
        mymap[x]=y;
        mymap[y]=x;
    }
    cin >> x;
    cout << mymap.find(x) -> second;


}