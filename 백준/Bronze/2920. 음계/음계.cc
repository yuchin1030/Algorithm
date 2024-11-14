#include <iostream>
using namespace std;

int main()
{
	int arr[8] = { 0 };
	int cntA = 0;
	int cntD = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] - arr[i + 1] == -1)
			cntA++;
		else if (arr[i] - arr[i + 1] == 1)
			cntD++;
		else
			break;
		
	}

	if (cntA == 7)
		cout << "ascending";
	else if (cntD == 7)
		cout << "descending";
	else
		cout << "mixed";

}