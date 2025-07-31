#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	set<int> s;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		s.insert(num);
	}

	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
}