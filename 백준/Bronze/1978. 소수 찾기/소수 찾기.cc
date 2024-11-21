#include <iostream>
using namespace std;

int main() 
{
	int N, num;
	int div = 0;    // 약수의 개수
	int cnt = 0;    // 소수의 개수
	
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		
		if (num == 1)
			continue;
			
		for (int j = 1; j <= num; j++)
		{
			if (num % j == 0)
			{
				div++;
                
                // 약수의 개수가 이미 2개를 초과하면 계속 반복할 필요 없음
				if (div > 2)
					break;
			}
		}
		
        // 약수의 개수가 2개라는 것은 소수라는 뜻
		if (div == 2)
		    cnt++;
		
		div = 0;
	}
	
	cout << cnt;
}