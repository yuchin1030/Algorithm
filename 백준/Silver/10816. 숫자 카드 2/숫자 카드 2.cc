#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> v(N);

	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int num;
		cin >> num;

		// - upper_bound : 찾고자 하는 값의 다음 값이 최초로 나타나는 위치
		// - lower_bound : 찾고자 하는 값 이상이 처음 나타나는 위치
		/*
		즉, 1 2 4 4 6 7에서
			lower_bound(~, ~, 4)의 결과 : 3 (4 이상의 값이 처음 나타나는 위치)
			upper_bound(~, ~, 4)의 결과 : 5 (4를 초과하는 값이 처음 나타나는 위치)를 이용해서 
			사이의 값을 빼주면 2가 나오고 이것은 결국 저장된 4의 개수가 된다.
			출처 : https ://bbeomgeun.tistory.com/18 [꾸준하게 차근차근:티스토리]
		*/
		cout << upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num) << " ";
	}
}