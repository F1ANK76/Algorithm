#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    string tmp = "";
    int a_tmp = 0, b_tmp = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(tmp.length() == 0)
        {
            tmp += s[i];
            a_tmp += 1;
        }
        else
        {
            if(tmp[0] == s[i]) a_tmp += 1;
            else b_tmp += 1;
            
            tmp += s[i];
        }
        
        if(a_tmp == b_tmp)
        {
            answer++;
            tmp = "";
            a_tmp = 0;
            b_tmp = 0;
        }
    }
    
    if(tmp.length() != 0) answer++;
    
    return answer;
}