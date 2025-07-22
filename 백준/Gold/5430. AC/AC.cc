#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int n; string p, str;

		cin >> p >> n >> str;

		deque<int> d;
		string temp = "";

		for (int j = 0; j < str.length(); j++)
		{
			if (n != 0)
			{
				if (str[j] >= '0' && str[j] <= '9')
				{
					temp += str[j];
				}
				else if (str[j] == ',' || str[j] == ']')
				{
					d.push_back(stoi(temp));
					temp = "";
				}
			}
			
		}
		
		bool flag = true; // 에러 여부
		bool dir = true; // 정방향, 역방향

		for (int j = 0; j < p.length(); j++)
		{
			if (p[j] == 'R')
				dir = !dir;
			else
			{
				if (d.empty())
				{
					cout << "error\n";
					flag = false;
					break;
				}
				else
				{
					if (dir)
						d.pop_front();
					else
						d.pop_back();
				}
			}

		}

		if (flag)
		{
			if (!dir)
				reverse(d.begin(), d.end());

			cout << '[';
			for (int k = 0; k < d.size(); k++)
			{
				cout << d[k];

				if (k != d.size() - 1)
					cout << ',';
			}
			cout << "]\n";
		}

	}
}