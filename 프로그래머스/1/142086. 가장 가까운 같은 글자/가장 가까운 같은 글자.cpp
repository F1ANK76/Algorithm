#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> result(s.size(), -1);  // 결과를 저장할 벡터, 초기값은 -1
    unordered_map<char, int> lastIndex;  // 각 문자가 마지막으로 나온 인덱스를 저장

    for (int i = 0; i < s.size(); ++i) {
        char currentChar = s[i];
        
        // 만약 해당 문자가 이미 등장한 적이 있으면, 그 위치를 result에 저장
        if (lastIndex.find(currentChar) != lastIndex.end()) {
            result[i] = i - lastIndex[currentChar];
        }
        
        // 현재 문자의 인덱스를 마지막으로 나온 위치로 갱신
        lastIndex[currentChar] = i;
    }
    
    return result;
}