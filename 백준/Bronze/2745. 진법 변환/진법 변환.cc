#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N; int B;
	cin >> N >> B;

	int sum = 0;
	for (int i = 0; i < N.length(); i++)
	{
		if (N[N.length() - 1 - i] >= 'A' && N[N.length() - 1 - i] <= 'Z')
		{
			sum += pow(B, i) * (N[N.length() - 1 - i] - 55);
		}
		else // if (N[N.length() - 1 - i] >= '0' && N[N.length() - 1 - i] <= '9')
		{
			sum += pow(B, i) * (N[N.length() - 1 - i] - '0');
		}
	}
	
	cout << sum;
}