
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)  
	{
		int n;
		cin >> n;
		int a = n;
		int b = 0;
		int N;
		int e = 1;
		while (n != 0)  
		{
			N = n % 10;
		  n =  n / 10;
			
			if (N == 4) {
				a = a - 2 * e;
				b = b + 2 * e;
			}
			e = e * 10;
		}
		cout << "Case #" << i + 1 << " : " << a << " " << b << endl;
	}

}


