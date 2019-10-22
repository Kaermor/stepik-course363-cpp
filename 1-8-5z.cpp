#include <iostream>

using namespace std;

void foo_1_8_5z()
{
	int n;
	cin >> n;
	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			a[i][j] = j - i;
			a[j][i] = a[i][j];
			
		}
		
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}