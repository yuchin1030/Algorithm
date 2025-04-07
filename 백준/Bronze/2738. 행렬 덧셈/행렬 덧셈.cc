#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> A(N * M);
	vector<int> B(N * M);

	for (int i = 0; i < N * M; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N * M; i++)
	{
		cin >> B[i];
	}

	for (int i = 0; i < N * M; i++)
	{
		if (i % 3 == 2)
			cout << A[i] + B[i] << "\n";
		else
			cout << A[i] + B[i] << " ";
	}
}