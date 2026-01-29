#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int K; long long sum = 0;
	cin >> K;

	stack<int> st;
	while (K--)
	{
		int num;
		cin >> num;

		if (num)
			st.push(num);
		else
			st.pop();
	}

	while (!st.empty())
	{
		sum += st.top();
		st.pop();
	}

	cout << sum;
}