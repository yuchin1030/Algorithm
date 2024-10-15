#include <iostream>
using namespace std;

int main()
{
	int L, A, B, C, D;

	cin >> L >> A >> B >> C >> D;

	if (A % C == 0 || B % D == 0)
		cout << L - max(A / C, B / D);
	else
		cout << L - (max(A / C, B / D) + 1);

}