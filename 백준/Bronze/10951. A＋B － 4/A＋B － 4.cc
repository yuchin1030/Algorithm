#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL); ios::sync_with_stdio(false);

	int a, b;

	/*
		// https://velog.io/@miiingirok/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%EB%B0%B1%EC%A4%80-10951%EB%B2%88-AB-4-C
		cin은 데이터를 읽은 후 스트림 객체를 반환하지만,
		조건문 안에 있는 경우 bool 타입으로 바뀌어 true, false를 반환한다.

		cin이 데이터를 읽는 과정에서 실패하면 false, 성공하면 true를 반환하기 때문에
		while문 조건식을 cin >> a >> b로 설정한다.
	*/
	while (cin >> a >> b) {
		cout << a + b << "\n";	
	}

}