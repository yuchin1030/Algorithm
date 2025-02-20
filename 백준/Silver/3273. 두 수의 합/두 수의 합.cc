#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x; 
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	cin >> x;

	stable_sort(v.begin(), v.end());

	int left = 0, right = n - 1;
	int cnt = 0;

	while (left < right)
	{
		if (v[left] + v[right] == x)
		{
			cnt++;
			left++;
			right--;
		}
		else if (v[left] + v[right] > x)
			right--;
		else
			left++;
	}

	// 브루트포스 (시간초과)
	//for (int i = 0; i < n - 1; i++)
	//{
	//	for (int j = i + 1; j < n; j++)
	//	{
	//		if (v[i] + v[j] == x)
	//			cnt++;
	//	}
	//}

	cout << cnt;
}

/*
<오름차순으로 정렬한 이유>
해당 문제는 배열의 위치가 중요하지 않음
정렬하여, 해당 숫자보다 작거나 클 경우에 포인터를 움직이는 방식을 쓰기 위해
두 포인터를 각 끝에 위치시킨 후
두 포인터 위치 값의 합이 x와 동일할 경우 둘다 위치를 움직여 준다.

두 포인터 위치 값의 합이 x보다 작을 경우 Left를 오른쪽으로 움직여 준다
정렬했기 때문에 오른쪽 값이 더 크거나 같다는 것이 확정이므로 합이 커지거나 같다.

위치값 합이 x보다 클 경우 Right를 왼쪽으로 움직여 준다.
정렬했기 때문에 왼쪽 값이 더 작거나 같다는 것이 확정이므로 합이 작아지거나 같다.

[참고] https://velog.io/@ooo1324/%EB%B0%B1%EC%A4%80-3273%EB%B2%88-%EB%91%90-%EC%88%98%EC%9D%98-%ED%95%A9-C
*/