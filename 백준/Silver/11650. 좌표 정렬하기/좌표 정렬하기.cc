#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<pair<int, int>> v;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;

		v.push_back({ x, y });
		// v.push_back(make_pair(x, y));
	}
	
	// STL의 sort 함수를 쓰면 
	// 알아서 vector 의 first 를 기준으로 정렬을 하고, 
	// first가 같으면 second를 기준으로 정렬함
	sort(v.begin(), v.end());
	
	for (int i = 0; i < N; i++)
	{
		cout << v[i].first << ' ' << v[i].second << "\n";
	}
}