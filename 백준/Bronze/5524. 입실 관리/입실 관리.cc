#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	string str;

	for (int i = 0; i < N; i++)
	{
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			str[j] = tolower(str[j]);
		}

		cout << str << "\n";
	}
}