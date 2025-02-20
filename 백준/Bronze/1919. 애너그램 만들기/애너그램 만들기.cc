#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string str1, str2;

	cin >> str1 >> str2;

	vector<int> v1(26, 0);
	vector<int> v2(26, 0);

	for (int i = 0; i < str1.length(); i++)
	{
		v1[str1[i] - 'a']++;
	}

	for (int i = 0; i < str2.length(); i++)
	{
		v2[str2[i] - 'a']++;
	}

	int sum = 0;
	for (int i = 0; i < 26; i++)
	{
		sum += abs(v1[i] - v2[i]);
	}

	cout << sum;
}