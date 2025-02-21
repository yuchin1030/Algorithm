#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;
	cin >> str;

	// s.begin()부터 s.end()까지의 범위에 있는 데이터를 이용해 리스트를 생성
	list<char> l(str.begin(), str.end());
	/*
	list <char> li; //양방향 연결리스트 선언

	for (const auto &c : str) //한 문자씩 연결리스트에 넣기
        li.push_back(c);
	*/

	// 커서는 문장의 맨 뒤에 위치
	list<char>::iterator it = l.end();
	// auto t = l.end();
	
	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		char cml;
		cin >> cml;
			
		switch (cml)
		{
		case 'L': 
			if (it != l.begin())
				it--;
			break; 
		case 'D':
			if (it != l.end())
				it++;
			break;
		case 'B':
			if (it != l.begin())
			{
				it--;
				// list의 erase함수를 사용할 때 
				// return값은 지운 요소의 다음 요소를 반환하므로 
				// 이를 다시 it에 대입
				it = l.erase(it);
			}
			break;
		case 'P':
			char ch;
			cin >> ch;

			// it 왼쪽에 삽입, it은 원래 가리키던 값을 가리킴
			// 따라서 it++을 해줄 필요 없음
			l.insert(it, ch);
			break;
		}
	}

	// list 출력
	for (it = l.begin(); it != l.end(); it++)
	{
		cout << *it;
	}
	/*
	for (const auto& c : l)
		cout << c;
	*/



	//// vector (시간초과)
	//vector<char> v;

	//for (int i = 0; i < str.length(); i++)
	//{
	//	v.push_back(str[i]);
	//}

	//// 커서는 문장의 맨 뒤에 위치
	//int index = v.size();
	// 
	//int M;
	//cin >> M;

	//for (int i = 0; i < M; i++)
	//{
	//	char cml;
	//	cin >> cml;
	//	
	//	switch (cml)
	//	{
	//	case 'L': 
	//		if (index > 0)
	//			index--;
	//		break; 
	//	case 'D':
	//		if (index < v.size())
	//			index++;
	//		break;
	//	case 'B':
	//		if (index > 0)
	//		{
	//			index--;
	//			v.erase(v.begin() + index);
	//		}
	//		break;
	//	case 'P':
	//		char ch;
	//		cin >> ch;

	//		v.insert(v.begin() + index, ch);
	//		index++;
	//		break;
	//	}
	//}

	//for (int i = 0; i < v.size(); i++)
	//{
	//	cout << v[i];
	//}
}