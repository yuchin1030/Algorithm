#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	cin.ignore();

	for (int i = 0; i < T; i++)
	{
		string str;

		getline(cin, str);
		str += ' ';

		stack<char> st;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == ' ')
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				
				cout << " ";
			}
			else
			{
				st.push(str[j]);
			}
		}
		
		cout << "\n";
	}


}