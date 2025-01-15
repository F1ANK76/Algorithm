#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) {  // 알파벳인 경우에만 처리
            char base = (isupper(s[i])) ? 'A' : 'a';  // 대소문자 구분
            s[i] = (s[i] - base + n) % 26 + base;  // 시저 암호 구현
        }
    }
    return s;
}