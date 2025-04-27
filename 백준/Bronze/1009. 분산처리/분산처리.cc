#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int a, b;
		cin >> a >> b;

		int tmp = 1;

		for (int j = 0; j < b; j++) 
		{
			tmp = (tmp * a) % 10;
		}
		
		if (tmp == 0)
			cout << "10\n";
		else
			cout << tmp << "\n";
	}

}