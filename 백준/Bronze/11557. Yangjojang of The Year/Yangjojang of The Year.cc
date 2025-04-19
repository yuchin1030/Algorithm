#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b)
{
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	vector<pair<string, int>> v;

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		for (int j = 0; j < N; j++)
		{
			string S; int L;
			cin >> S >> L;

			v.push_back({ S, L });
		}

		sort(v.begin(), v.end(), compare);

		int num = v.size();

		cout << v[num -1].first << "\n";
	}

}