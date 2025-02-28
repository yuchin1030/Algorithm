#include <iostream>
using namespace std;

int getNum(int x, int y)
{
	if (y == 1)
		return 1;
	else if (x == 0)
		return y;
	else 
		return getNum(x-1, y) + getNum(x, y-1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++)
	{
		int k, n;
		cin >> k >> n;
		
		cout << getNum(k, n) << "\n";
	}
}