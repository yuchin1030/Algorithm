#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	stack<int> s;
	int temp = 1;
	string str = "";

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		while (temp <= num)
		{
			s.push(temp);
			str += '+';
			temp++;
		}

		if (num == s.top())
		{
			s.pop();
			str += '-';
		}
	}

	if (s.empty())
	{
		for (int i = 0; i < str.length(); i++)
			cout << str[i] << "\n";
	}
	else
	{
		cout << "NO";
	}
}