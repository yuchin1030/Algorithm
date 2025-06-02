#include <iostream>
using namespace std;

int main()
{
	int L; string str;
	long long r = 1; 
	long long M = 1234567891;
	long long sum = 0;
	
	cin >> L >> str;

	for (int i = 0; i < L; i++)
	{
		sum += ((str[i] - 'a' + 1) * r) % M;
		sum %= M;
		r = (r * 31) % M;
	}

	cout << sum;
}