#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	int Y = 0; int M = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		Y += (num / 30 + 1) * 10;
		M += (num / 60 + 1) * 15;
	}
	
	if (Y < M)
		cout << "Y " << Y;
	else if (Y == M)
		cout << "Y M " << Y;
	else
		cout << "M " << M;

}