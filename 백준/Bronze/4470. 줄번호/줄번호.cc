#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    string str;

    getline(cin, N);

    for (int i = 1; i <= stoi(N); i++)
    {
        getline(cin, str);
        cout << i << ". " << str << "\n";
    }
}