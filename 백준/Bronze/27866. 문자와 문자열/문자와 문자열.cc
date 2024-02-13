#include <iostream> 
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	
	
	string s;
	int i;

	cin >> s >> i;

	//cout << s[i - 1];
	cout << s.at(i - 1);
}
