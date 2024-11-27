#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string num;

	while (cin >> num)
	{
		if (num == "0")
			break;

		string temp = num;

		reverse(num.begin(), num.end());

		if (temp == num)
			cout << "yes\n";
		else
			cout << "no\n";
	}
}