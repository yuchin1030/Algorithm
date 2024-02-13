#include <iostream> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	
	
	int N;	// 과목 개수
	double score[1001];
	double M = 0;
	double average;	// 평균
	double sum = 0;	// 점수 합

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		
		if (score[i] > M)
			M = score[i];
	}

	for (int i = 0; i < N; i++)
		sum += score[i] / M * 100;

	average = sum / N;

	cout.precision(2);
	cout << fixed;
	cout << average << "\n";
}