#include <iostream>
using namespace std;

int main() {
	int x, y;

	cin >> x >> y;

	int third, fourth, fifth, sixth;

	third = x * (y % 10);
	fourth = x * ((y % 100) / 10);
	fifth = x * (y / 100);
	sixth = third + fourth * 10 + fifth * 100;

	cout << third << endl;
	cout << fourth << endl;
	cout << fifth << endl;
	cout << sixth << endl;

	return 0;
}