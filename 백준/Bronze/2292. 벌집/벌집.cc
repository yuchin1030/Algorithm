#include <iostream>
using namespace std;

int main() 
{
	int N;
	int cnt = 0;
	int sum = 1;
	
	cin >> N;
	
	while(true)
	{
		sum += 6 * cnt;
			
		if (N <= sum)
		{
			cout << cnt + 1;
			break;
		}
		else
		{
			cnt++;
		}
		
	}
}