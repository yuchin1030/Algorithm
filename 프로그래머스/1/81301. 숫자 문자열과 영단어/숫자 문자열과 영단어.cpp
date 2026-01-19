#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string s) {
    string answer = "";
    
    map<string, string> m;
    m["zero"] = "0"; m["one"] = "1"; m["two"] = "2";
    m["three"] = "3"; m["four"] = "4"; m["five"] = "5"; m["six"] = "6";
    m["seven"] = "7"; m["eight"] = "8"; m["nine"] = "9";
    
    string str = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
            answer += s[i];
        else
        {
            str += s[i];
            
            if(m.find(str) != m.end())
            {
                answer += m[str];
                str.clear();
            }
        }
    }
    
    return stoi(answer);
}