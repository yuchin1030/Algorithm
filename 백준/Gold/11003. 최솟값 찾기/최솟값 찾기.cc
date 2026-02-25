#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, L;
	cin >> N >> L;
	// L = 3 : -1~1, 0~2, 1~3, 2~4, ... 10~12
	// [ 1 5 2 3 6 2 3 7 3 5 2 6 ]
	
	// 슬라이드 윈도우 알고리즘(O(N))
	// deque = 구간 (최소값 후보가 될 인덱스값, 구간 안에서의 최소값)
	deque<pair<int, int>> dq;	

	for (int i = 1; i <= N; i++)
	{
		int num;
		cin >> num;

		while (!dq.empty() && dq.back().second >= num)
		{
			dq.pop_back();
		}

		// 새로운 숫자는 항상 삽입
		dq.push_back({ i, num });

		// dq = [(1,1) (2,5) (3,2) (4,3) ]
		// i =	  1		2	  3		4
		// i-L+1= -1	0	  1		2

		// 주어진 구간을 벗어나면 제거
		if (dq.front().first < i - L + 1)
			dq.pop_front();

		cout << dq.front().second << " ";
	}

	// 시간초과 코드
	//vector<int> v;

	//for (int i = 0; i < N; i++)
	//{
	//	int num;
	//	cin >> num;

	//	v.push_back(num);
	//}

	//for (int i = 0; i < N; i++)
	//{
	//	int index = i - L + 1;

	//	if (index < 0)
	//		cout << *min_element(v.begin(), v.begin() + i + 1) << " ";
	//	else
	//		cout << *min_element(v.begin() + index, v.begin() + i + 1) << " ";
	//
	//}
}