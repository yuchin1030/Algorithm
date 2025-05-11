#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int X;
	cin >> X;

	int i = 1;
	
	while (X > i)
	{
		X -= i; 
		i++;
	}

	if (i % 2 == 1)
		cout << i + 1 - X << '/' << X;
	else
		cout << X << '/' << i + 1 - X;
}