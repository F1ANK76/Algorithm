#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string s) {
    // 영단어와 해당 숫자를 매핑한 맵
    unordered_map<string, string> wordToNum = {
        {"zero", "0"},
        {"one", "1"},
        {"two", "2"},
        {"three", "3"},
        {"four", "4"},
        {"five", "5"},
        {"six", "6"},
        {"seven", "7"},
        {"eight", "8"},
        {"nine", "9"}
    };
    
    string result = "";
    string current = "";
    
    for (char ch : s) {
        current += ch;  // 한 글자씩 추가
        
        // 만약 current가 영단어라면
        if (wordToNum.find(current) != wordToNum.end()) {
            result += wordToNum[current];  // 해당 영단어를 숫자로 바꿔서 result에 추가
            current = "";  // current를 초기화
        }
        // 숫자일 경우 바로 result에 추가
        else if (isdigit(ch)) {
            result += ch;
            current = "";  // current를 초기화
        }
    }
    
    // 결과를 정수로 변환해서 반환
    return stoi(result);
}