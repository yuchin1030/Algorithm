#include <iostream>
using namespace std;

int main()
{
	int W, H;

	cin >> W >> H;

	//cout.precision()은 소수점 아래 부분의 출력 범위만 설정하는 게 아니고 
	// 실수의 정수부와 소수부를 합친, 전체의 출력 범위를 설정하는 함수.

	//	만약, 이걸 소수점 아래 숫자의 출력 범위만 설정하게 쓰려면
	//	함수 위에 cout << fixed; 라는 라인을 추가

	//	이걸 설정한 후 다시 해제해서 실수 전체의 출력 범위를 설정하고 싶다면
	//	cout.unsetf(ios::fixed); 이라는 라인을 추가

	cout << fixed;
	cout.precision(1);

	cout << 0.5 * W * H;
}