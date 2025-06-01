#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

string strB[8] =
{
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};

string strW[8] =
{
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

vector<string> v(50);

int cntB(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (v[x+i][y+j] != strB[i][j])
				cnt++;
		}
	}

	return cnt;
}

int cntW(int x, int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (v[x+i][y+j] != strW[i][j])
				cnt++;
		}
	}

	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		getline(cin, v[i]);
	}

	int minV = 64;
	for (int i = 0; i + 8 <= N; i++)
	{
		for (int j = 0; j + 8 <= M; j++)
		{
			int temp = min(cntB(i, j), cntW(i, j));

			if (temp < minV)
				minV = temp;
		}
	}

	cout << minV;
}