#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<int> s;

	int N;	// 명령의 수
	int num; // push할 때 스택에 넣을 정수
	int value;	// 출력되는 결과값
	string command;	// 명령어

	cin >> N;	// 명령할 명령어의 개수 입력

	// 주어진 명령어의 수만큼 반복
	for (int i = 0; i < N; i++) {
		
		cin >> command;	// 명령할 함수 입력
		
		if (command == "push") {
			cin >> num;		// 스택에 넣을 숫자 입력
			s.push(num);	// 스택에 넣음
		}
		else if (command == "pop") {
			if (s.size() == 0) {	// 스택이 비어있다면
				value = -1;	
				cout << value << endl;	// -1 출력
			}
			else {
				value = s.top();	// 결과값에 가장 위에 있는 정수 먼저 저장
				s.pop();	// 스택의 가장 위에 있는 정수를 빼고
				cout << value << endl;	// 그 수를 출력
			}
		}
		else if (command == "size") {
			cout << s.size() << endl;	// 스택에 들어있는 정수의 개수 출력
		}
		else if (command == "empty") {	
			if (s.size() == 0) {	// 스택이 비어있다면 1 출력
				value = 1;		
				cout << value << endl;
			}
			else {		// 아니면 0 출력
				value = 0;
				cout << value << endl;
			}
		}
		else if (command == "top") {
			if (s.size() == 0) {	// 스택이 비어있다면 -1 출력
				value = -1;
				cout << value << endl;	
			}
			else {
				value = s.top();	// 아니면 가장 위에 있는 정수 출력
				cout << value << endl;
			}

		}
	}

	return 0;
}