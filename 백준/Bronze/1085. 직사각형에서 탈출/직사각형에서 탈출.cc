#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	// x, y : 아래 경계선
	// w-x, h-y : 위 경계선
	cout << min(min(x, y), min(w - x, h - y));
}