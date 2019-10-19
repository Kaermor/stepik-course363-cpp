#include <iostream>
#include <vector>

using namespace std;

void foo_1_7_8z() {
	int n, min, c = 0;
	cin >> n;
	vector<int> a(n);
	//input
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	//processeng and output
	for (int i = 0; i < n; ++i) {
		if (a[i] > 0) {
			if (c==0)
			{
				min = a[i];
				c = 1;
			}
			if (a[i] < min) {
				min = a[i];
			}
			
		}
	}
	cout << min << endl;
}