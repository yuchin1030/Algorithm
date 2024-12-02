#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string temp[4];

	cin >> str;

	int sum = 0;
	for (int i = 0; i < str.length(); i++)
	{
		temp[i] = str[i];
		
		if (temp[i] == "0")
			sum += stoi(temp[i - 1]) * 10 - stoi(temp[i - 1]);
		else
			sum += stoi(temp[i]);
		
	}

	cout << sum;

}