#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_9z(){
	int n, tmp, min;
	cin >> n;
	vector<int> a;
	//input
	for (int i = 0; i < n; ++i) {
		cin >> tmp;
		if (tmp % 2 != 0) {
			a.push_back(tmp);
		}
	}
	//cout << a.size() << endl;
	//processing and output
	//for (int i = 0; i < n; ++i) {

	//}
	
	if (a.size() == 0) {
		cout << 0 << endl;
	}
	else {
		min = a[0];
		for (auto now : a) {
			if (now < min) {
				min = now;
			}
			
		}
		cout << min << endl;
	}
}