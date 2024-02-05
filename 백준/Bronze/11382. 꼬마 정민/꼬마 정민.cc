#include <iostream>
using namespace std;
/*
1 ≤ A, B, C ≤ 10^12 는 모든 입력이 이 조건을 지킨다는 뜻
즉, 입력 조건의 숫자 범위는 데이터 타입에 구애받지 않고 모든 숫자에서 만족한다는 것이므로, 
데이터형은 int도 double도 아닌 long long을 사용
long long 자료형은 int형 연산에서 초과되는 범위를 다룰 때 사용
*/
int main() {
	long long a, b, c;

	cin >> a >> b >> c;

	cout << a + b + c << endl;

	return 0;
}