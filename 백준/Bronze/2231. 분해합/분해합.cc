#include <iostream>
using namespace std;

int main()
{
	int N; int result = 0;
	cin >> N;

	// 생성자는 N보다 크거나 같을 수 없음
	for (int i = 1; i <= N; i++)
	{
		int sum = 0;
		int num = i;

		// 앞자리까지 다 더하면 num은 0이 될 수 밖에 없음
		while (num != 0)
		{
			// 각 자릿수마다 더하기
			sum += num % 10;
			num /= 10;
		}

		// 생성자를 찾은 경우 (각 자릿수의 합 + 수 자체)
		if (sum + i == N)
		{
			result = i;
			break;
		}
	}

	// 찾지 못했다면 result의 초기값 0이 출력됨
	cout << result;
}