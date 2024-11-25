#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	int L; string str;
	
	cin >> L >> str;
	
	int num[L]; int sum = 0;
	
	// 1. 문자열 숫자로 바꾸기
	for (int i = 0; i < L; i++)
	{
		num[i] = str[i] - 'a' + 1;
	}
	
	// 2. 해시함수 수식 구현
	for (int j = 0; j < L; j++)
	{
		sum += num[j] * pow(31, j);
	}
	
	cout << sum;
}