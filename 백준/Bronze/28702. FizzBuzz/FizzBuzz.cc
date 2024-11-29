#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str[3];

	for (int i = 0; i < 3; i++)
	{
		cin >> str[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (str[i] != "Fizz" && str[i] != "Buzz" && str[i] != "FizzBuzz")
		{
			// 1번째 문자열이 숫자일 경우 +3
			// 2번째 문자열이 숫자일 경우 +2
			// 3번째 문자열이 숫자일 경우 +1
			int num = stoi(str[i]) + 3 - i;

			if (num % 3 == 0 && num % 5 == 0)
				cout << "FizzBuzz";
			else if (num % 3 == 0 && num % 5 != 0)
				cout << "Fizz";
			else if (num % 3 != 0 && num % 5 == 0)
				cout << "Buzz";
			else
				cout << num;

			break;
		}
	}
}