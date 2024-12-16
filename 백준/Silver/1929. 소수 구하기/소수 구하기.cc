#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int M, N;
	cin >> M >> N;
	
	for (int i = M; i <= N; i++)
	{
		int div = 0;
		
		if (i == 1)
			continue;
				
		for (int j = 1; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				div++;
				
				if (div >= 2)
					break;
			}
		}
		
		if (div == 1)
			cout << i << "\n";
		
	}
}