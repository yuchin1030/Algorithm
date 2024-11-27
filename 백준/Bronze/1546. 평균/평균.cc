#include <iostream>
using namespace std;

int main()
{
	int N;
	double score[1000];
	double max = 0; double sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> score[i];

		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < N; i++)
	{
		sum += score[i] / max * 100;
	}

	cout << sum / N;
}