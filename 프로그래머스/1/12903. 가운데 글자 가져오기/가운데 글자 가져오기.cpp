#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int ptr = s.length() / 2;
    
    if(s.length() % 2 == 0) answer += s[ptr - 1];

    answer += s[ptr];
    
    return answer;
}