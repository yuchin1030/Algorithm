#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;; int B;
	cin >> N >> B;

	string str;

	while (true)
	{
		int result = N % B;
		
		if (result + 55 >= 'A' && result + 55 <= 'Z')
			str += result + 55;
		else
			str += result + '0';

		if (N / B == 0)
			break;
		else
			N /= B;
	}

	reverse(str.begin(), str.end());

	cout << str;
}