#include <iostream>

using namespace std;

//int bros(int n) {
//	if (n == 1)
//	{
//		cout << "n=1" << " " << "bros=0" << endl;
//		return 0;
//	}
//	else if (n == 2)
//	{
//		cout << "n=2" << " " << "bros=1" << endl;
//		return 1;
//	}
//	else if (n == 3)
//	{
//		cout << "n=3" << " " << "bros=2" << endl;
//		return 2;
//	}
//	else if (n == 4)
//	{
//		return 2;
//	}
//	else if (n == 5)
//	{
//		return 3;
//	}
//	//else if (n == 6)
//	//{
//	//	return 5;
//	//}
//	//else if (n == 7)
//	//{
//	//	return 5;
//	//}
//	else
//	{
//		//cout << "n=" << n << "bros(n/2)=" << bros(n / 2) << " " << "bros(n - n/2)=" << bros(n - n/2) << endl;
//		//return bros(n/2) + bros(n - n/2) + 1;
//		return 1 + bros((n + 1) / 2);
//	}
//
//}


int bros(int n) {
	int x=0, xc = 1;
	n = n - 1;
	while (n > 0)
	{
		x = xc;
		n = n - xc;
		++xc;
	}
	return x;
}


void foo_1_9_15z() {
	int n;
	cin >> n;
	cout << bros(n);
}