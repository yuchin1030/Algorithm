#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, P;
	cin >> N >> P;

	vector<int> v(1001);

	int i = 1;
	int num = N;
	v[num] = i;

	while (true)
	{
		num = (num * N) % P;
		i++;

		if (v[num])
		{
			// 중복되지 않은 숫자의 개수 = (연산과정에서) 중복된 숫자가 두번째 나타난 순서 - 처음 나타난 순서
			cout << i - v[num];
			break;
		}
		else
		{
			v[num] = i;
		}

	}
}