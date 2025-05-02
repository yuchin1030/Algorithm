#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<pair<string, string>> v;
	v.push_back({ "black", "0" });
	v.push_back({ "brown", "1" });
	v.push_back({ "red", "2" });
	v.push_back({ "orange", "3" });
	v.push_back({ "yellow", "4" });
	v.push_back({ "green", "5" });
	v.push_back({ "blue", "6" });
	v.push_back({ "violet", "7" });
	v.push_back({ "grey", "8" });
	v.push_back({ "white", "9" });

	vector<pair<string, long long>> p;
	p.push_back({ "black", 1 });
	p.push_back({ "brown", 10 });
	p.push_back({ "red", 100 });
	p.push_back({ "orange", 1000 });
	p.push_back({ "yellow", 10000});
	p.push_back({ "green", 100000 });
	p.push_back({ "blue", 1000000 });
	p.push_back({ "violet", 10000000 });
	p.push_back({ "grey", 100000000 });
	p.push_back({ "white", 1000000000 });

	string result;

	for (int i = 0; i < 3; i++)
	{
		string str;
		cin >> str;

		for (int j = 0; j < 10; j++)
		{
			// 값
			if (i <= 1 && v[j].first == str)
			{
				result += v[j].second;
				break;
			}
			// 곱
			else if(p[j].first == str)
			{
				cout << stoi(result) * p[j].second;
				break;
			}
		}
	}

}