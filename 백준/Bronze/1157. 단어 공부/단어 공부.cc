#include <iostream>
#include <string>

using namespace std;

int main() {

	int arr[26] = {0};	// 알파벳(a-z) 사용 횟수를 저장하는 배열
	string str;		// 입력할 단어
	int max = 0;	// 가장 많이 사용된 알파벳의 사용 횟수
	char result;	// 가장 많이 사용된 알파벳(중복이면 '?')

	cin >> str;

	// 알파벳 사용 횟수 계산
	for (int i = 0; i < str.length(); i++) {
		char ch = str.at(i);	// 문자열 중 인덱스(i)에 해당하는 문자만 출력

		if (ch >= 'a' && ch <= 'z')		// 소문자일 경우 사용 횟수 증가
			arr[ch - 'a']++;
		else if (ch >= 'A' && ch <= 'Z')	// 대문자일 경우 해당 소문자에 횟수 증가
			arr[ch - 'A']++;
	}

	for (int i = 0; i < 26; i++) {	
		if (arr[i] > max) {	// 가장 많이 사용된 알파벳의 사용 횟수 찾기
			max = arr[i];
			result = (char)('A' + i);	// 가장 많이 사용된 알파벳
		}
		else if (arr[i] == max)		// 가장 많이 사용된 알파벳이 여러 개 존재하는 경우
			result = '?';	
	}

	cout << result << endl;

	return 0;
}