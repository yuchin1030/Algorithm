#include <iostream>
#include <string>
using namespace std;

int main()
{
	int A, B, C;
	int cnt[10] = { 0 };

	cin >> A >> B >> C;

	int result = A * B * C;

	// int 형을 string 형으로 바꾸기 (string 헤더 추가)
	string str = to_string(result);

	for (char ch : str)
	{
		cnt[ch - '0']++;
	}

	for (int i = 0; i < 10; i++)
		cout << cnt[i] << "\n";
}