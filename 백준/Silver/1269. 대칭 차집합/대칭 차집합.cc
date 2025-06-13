#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;

	set<int> s;

	for (int i = 0; i < A + B; i++)
	{
		int num;
		cin >> num;

		s.insert(num);
	}

	int S = s.size();
	int C = A + B - S;

	cout << S - C;

}