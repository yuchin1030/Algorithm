#include <iostream>
using namespace std;

int main()
{
	/*int xh, xm, xs, yh, ym, ys;

	for (int i = 0; i < 3; i++)
	{
		cin >> xh >> xm >> xs >> yh >> ym >> ys;

		if (xh == yh && xm == ym)
		{
			cout << xh << " " << xm << " " << ys - xs;
		}

	}*/

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		for (int j = 0; j < num; j++)
		{
			cout << "=";
		}
		cout << "\n";
	}

	
}