#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y;
	int X[3]; int Y[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> X[i] >> Y[i];
	}

	if (X[0] == X[1])
		cout << X[2] << " ";
	else if (X[0] == X[2])
		cout << X[1] << " ";
	else
		cout << X[0] << " ";

	if (Y[0] == Y[1])
		cout << Y[2];
	else if (Y[0] == Y[2])
		cout << Y[1];
	else
		cout << Y[0];
}