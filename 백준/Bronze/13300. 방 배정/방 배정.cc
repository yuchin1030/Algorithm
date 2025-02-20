#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, K;	// 학생수, 한 방 배정 최대 인원 수
	cin >> N >> K;

	// 여자 학년별 학생 수 배열
	vector<int> girl(6, 0);
	// 남자 학년별 학생 수 배열
	vector<int> boy(6, 0);

	for (int i = 0; i < N; i++)
	{
		int S, Y;	// 성별, 학년
		cin >> S >> Y;

		// 여학생인 경우
		if (S == 0)
		{
			// 여자 학년 배열에 학생 수 추가
			girl[Y - 1]++;
		}
		// 남학생인 경우
		else 
		{
			boy[Y - 1]++;
		}
	}

	int cnt = 0;

	for (int i = 0; i < 6; i++)
	{
		if (girl[i] % K == 0)
			cnt += girl[i] / K;
		else
			cnt += girl[i] / K + 1;

		if (boy[i] % K == 0)
			cnt += boy[i] / K;
		else
			cnt += boy[i] / K + 1;
	}
	// 4명인데 1, 2, 3, 4: 1
	// 4명인데 5, 6, 7, 8: 1+1
	//		   9,10,11,12: 2+1	

	cout << cnt;
}