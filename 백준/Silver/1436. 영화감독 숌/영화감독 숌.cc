#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	
	int num = 665;
	
	for (int i = 0; i < N; i++)
	{
		while(true)
		{
			num++;
			string temp = to_string(num);
			
			if (temp.find("666") != -1)
				break;
		}
	}
	
	cout << num;
}