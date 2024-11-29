#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;

	cin >> N;

	int arr[10001] = { 0 };

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		arr[num]++;
	}

	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j <= arr[i]; j++)
		{
			cout << i << "\n";
		}
	}
}
/*
메모리 용량 : 8MB
int 배열로 하면 4byte * 천만 = 40000KB = 40MB
(1byte * 1024 = 1KB, 1KB * 1024 = 1MB, 1MB * 1024 = 1GB)

즉, 배열에 수를 저장하여 정렬하는 아래 방법은 적합하지 않음
int N;

cin >> N;

vector<int> arr(N);

for (int i = 0; i < N; i++)
{
	cin >> arr[i];
}

stable_sort(arr.begin(), arr.end());

for (int i = 0; i < N; i++)
{
	cout << arr[i] << "\n";
}
*/