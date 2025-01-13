#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int cnt = 0;
    
    for(int i  = 0; i < s.length(); i++)
    {
        if(cnt % 2 == 0) s[i] = toupper(s[i]);
        else if(cnt % 2 == 1) s[i] = tolower(s[i]);
        
        cnt++;
        
        if(s[i] == ' ') cnt = 0;
    }
    
    return s;
}