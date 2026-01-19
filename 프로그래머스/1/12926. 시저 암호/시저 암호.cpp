#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            continue;
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (s[i] == 'z')
                    s[i] = 'a';
                else if (s[i] == 'Z')
                    s[i] = 'A';
                else
                    s[i]++;
            }
        }
        
    }
    
    return s;
}