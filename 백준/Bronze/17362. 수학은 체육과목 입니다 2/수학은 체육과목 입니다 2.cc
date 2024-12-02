#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	if (n % 8 == 1 || n % 8 == 9)
		cout << "1";
	else if (n % 8 == 0 || n % 8 == 2)
		cout << "2";
	else if (n % 8 == 3 || n % 8 == 7)
		cout << "3";
	else if (n % 8 == 4 || n % 8 == 6)
		cout << "4";
	else if (n % 8 == 5)
		cout << "5";
}