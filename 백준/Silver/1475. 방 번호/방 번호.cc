#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	cin >> N;

	int arr[10] = { 0 };
	int max = 0;

	for (int i = 0; i < N.length(); i++)
	{
		arr[N[i] - '0']++;
	}

	// 6과 9는 공동 사용 가능하기 때문에 미리 계산 후 배분
	// 9999444와 같은 반례를 없애기 위함
	int num = (arr[6] + arr[9] + 1) / 2;

	arr[6] = arr[9] = num;

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] >= max) 
		{
			max = arr[i];
		}
	}

	cout << max;
}