//
// Created by Graver on 20.10.2019.
//

#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_16z(){
    int N, K, li, ri;
    cin >> N >> K;
    vector<char> a(N, 'I');
    for (int i = 0; i < K; ++i) {
        cin >> li >> ri;
        for (int j = li-1; j < ri; ++j) {
            a[j] = '.';

        }
    }
    for (auto it:a) {
        cout << it;
    }
}
