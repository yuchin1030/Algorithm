#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num[20];

	// 배열 초기화 (1~20)
	for (int i = 0; i < 20; i++)
	{
		num[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		int a, b;
		cin >> a >> b;
		
		reverse(num + (a -1), num + b);
	}

	for (int i = 0; i < 20; i++)
	{
		cout << num[i] << " ";
	}
}