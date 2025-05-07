#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	// 별:4, 동: 3, 네: 2, 세: 1
	for (int i = 0; i < N; i++)
	{
		int a, b;
		cin >> a;

		vector<int> cntA(5);
		vector<int> cntB(5);

		for (int j = 0; j < a; j++)
		{
			int num;
			cin >> num;

			cntA[num]++;
		}

		cin >> b;
		for (int j = 0; j < b; j++)
		{
			int num;
			cin >> num;

			cntB[num]++;
		}

		if (cntA[4] > cntB[4])
			cout << "A\n";
		else if (cntA[4] < cntB[4])
			cout << "B\n";
		else if (cntA[3] > cntB[3])
			cout << "A\n";
		else if (cntA[3] < cntB[3])
			cout << "B\n";
		else if (cntA[2] > cntB[2])
			cout << "A\n";
		else if (cntA[2] < cntB[2])
			cout << "B\n";
		else if (cntA[1] > cntB[1])
			cout << "A\n";
		else if (cntA[1] < cntB[1])
			cout << "B\n";
		else
			cout << "D\n";
	}
	
}