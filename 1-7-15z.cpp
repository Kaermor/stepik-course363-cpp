//
// Created by Graver on 20.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_15z(){
    vector<int> x(8), y(8);
    int cntx = 0, cnty = 0, cntd = 0;
    //input 2 vect
    for (int i = 0; i < 8; ++i) {
        cin >> x[i];
        cin >> y[i];
    }
    //processing and output
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if ((x[i] == x[j]) && (i != j)){
                cntx++;
            }
            if ((y[i] == y[j]) && (i != j)){
                cnty++;
            }
            if (((abs(x[j]-x[i])) == (abs(y[j]-y[i]))) && (i != j)){
                cntd++;
            }

        }
    }
//    cout << cntx << " " << cnty << " " << cntd << endl;
    if ((cntx != 0) || (cnty !=0) || (cntd != 0)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
