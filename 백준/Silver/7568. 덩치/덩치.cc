#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	
	vector<pair<int, int>> v;
	
	for (int i = 0; i < N; i++)
	{
		int w, h;
		cin >> w >> h;
		
		v.push_back( {w, h} );
	}
	
	for (int i = 0; i < N; i++)
	{
		int rank = 1;
		
		for (int j = 0; j < N; j++)
		{
			// 나보다 큰 애가 있으면 뒤로 밀려나기
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				rank++;
		}
		
		cout << rank << " ";
			
	}
}