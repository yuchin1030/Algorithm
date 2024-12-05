#include <iostream>
using namespace std;

int main()
{
	int N;
	bool isExist = false;
	cin >> N;

	// 최소값을 찾아야하므로 나올 수 있는 최대값으로 초기화
	int min = N / 3;
	for (int i = 0; i <= N / 5; i++)
	{
		// 5의 개수를 점차 늘려가면서 최소값을 찾는다
		int value = N - 5 * i;

		// 5와 3으로 모두 나누어떨어질 경우(나누어떨어지지 않았다면 5와 3만으로 배달 불가) 
		// +
		// 최소값보다 더 작은 값이 나왔을 경우
		if (value % 3 == 0 && value / 3 <= min)
		{
			// i : 5kg의 개수, value / 3 : 3kg의 개수
			min = i + value / 3;
			// 한 번이라도 min 값이 바뀌었다면 최소값이 있다는 뜻
			isExist = true;
		}
	}

	// 한 번이라도 min의 값이 안 바뀌었다는 것은 해가 없다는 뜻
	if (!isExist)
		min = -1;

	cout << min;
}
