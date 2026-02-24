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

	while (T--)
	{
		string p; int n; string str;
		cin >> p >> n >> str;

		deque<int> dq;
		string temp = "";

		for (int i = 0; i < str.length(); i++)
		{
			if (n != 0)
			{
				if (str[i] >= '0' && str[i] <= '9')
					temp += str[i];
				else if (str[i] == ',' || str[i] == ']')
				{
					dq.push_back(stoi(temp)); 
					temp = "";
				}
			}
		}

		bool flag = true;	// 에러 여부
		bool dir = true;	// 정방향 여부

		for (int i = 0; i < p.length(); i++)
		{
			if (p[i] == 'R')
			{
				dir = !dir;
			}
			else
			{
				if (dq.empty())
				{
					cout << "error\n";
					flag = false;
					break;
				}
				else
				{
					if (dir)
						dq.pop_front();
					else
						dq.pop_back();
				}
			}
		}

		if (flag)
		{
			if (!dir)
				reverse(dq.begin(), dq.end());

			cout << '[';
			for (int i = 0; i < dq.size(); i++)
			{
				cout << dq[i];

				if (i != dq.size() - 1)
					cout << ',';
			}
			cout << "]\n";
		}
	}
	
}