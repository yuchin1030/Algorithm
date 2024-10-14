#include <iostream>
using namespace std;

int main()
{
	int price[5];
	int minBurger = 0;
	int minBeverage = 0;
	
	for (int i = 0; i < sizeof(price) / sizeof(int); i++)
	{
		cin >> price[i];
	}

	minBurger = min(price[0], price[1]);
	minBurger = min(minBurger, price[2]);

	minBeverage = min(price[3], price[4]);

	cout << minBurger + minBeverage - 50;
}