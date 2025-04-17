#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	// stoi() 는 문자열 앞에 0이 붙어 있어도, 자동으로 앞자리의 0을 무시하고 정수로 변환해줌
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string X, Y;
	cin >> X >> Y;

	reverse(X.begin(), X.end());
	reverse(Y.begin(), Y.end());

	string temp = to_string(stoi(X) + stoi(Y));

	reverse(temp.begin(), temp.end());

	cout << stoi(temp);
	
}