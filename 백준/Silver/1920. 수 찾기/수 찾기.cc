#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N;

	vector<long long> A(N);
	
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	// binary_search 사용하려면 우선 배열을 정렬해줘야함
	sort(A.begin(), A.end());
	
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		long long num;
		cin >> num;

		if (binary_search(A.begin(), A.end(), num))
			cout << "1\n";
		else
			cout << "0\n";	
	}

}