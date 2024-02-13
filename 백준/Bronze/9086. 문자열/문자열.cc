#include <iostream> 
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(NULL);	
	
	string s;
	int T;

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> s;
		cout << s.front() << s.back() << "\n";

	}

}