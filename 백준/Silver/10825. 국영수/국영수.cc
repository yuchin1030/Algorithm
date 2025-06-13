#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct STUDENT
{
	string name;
	int k;
	int e;
	int m;
};

bool compare(STUDENT a, STUDENT b)
{
	if (a.k == b.k && a.e == b.e && a.m == b.m)
		return a.name < b.name;
	else if (a.k == b.k && a.e == b.e)
		return a.m > b.m;
	else if (a.k == b.k)
		return a.e < b.e;
	else
		return a.k > b.k;
}

int main() 
{
	 int N;
    cin >> N;
 
    vector<STUDENT> v(N);
    
    for (int i = 0; i < N; i++)
        cin >> v[i].name >> v[i].k >> v[i].e >> v[i].m;
   
    sort(v.begin(), v.end(), compare);
 
    for (int i = 0; i < N; i++) 
        cout << v[i].name << '\n';
}