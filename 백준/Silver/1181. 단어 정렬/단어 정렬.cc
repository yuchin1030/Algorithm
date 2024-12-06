#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string i, string j)
{
	/* 
	i가 j보다 앞에 오는 경우(사전 순서상 a->b->c) 이 식은 true : i가 j보다 우선정렬
	i가 j보다 뒤에 오는 경우(사전 순서상 c->b->a) 이 식은 false : j가 i보다 우선정렬 (a->b 순서가 아닌 b->a로 되니까 바꿔줘야함)
	*/
	if (i.length() == j.length())
		return i < j;	
	else
		// 이 식이 참이면 i가 j보다 우선정렬(오름차순), 거짓이면 j가 i보다 우선정렬
		return i.length() < j.length();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<string> str(N);

	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
	}

	// sort함수는 compare(이름 마음대로) 함수를 지정하여 자신이 원하는대로 정렬 가능
	sort(str.begin(), str.end(), compare);
	
	for (int i = 0; i < N; i++)
	{
		if (i > 0 && str[i] == str[i - 1])
			continue;

		cout << str[i] << "\n";
	}
}