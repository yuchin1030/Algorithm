#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
	return a.second > b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair <int, int>> v;
	set<int> s;

	for (int i = 1; i <= 8; i++)
	{
		int score;
		cin >> score;

		v.push_back({ i, score });
	}

	sort(v.begin(), v.end(), compare);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += v[i].second;
		s.insert(v[i].first);
	}

	cout << sum << "\n";
	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << " ";

}