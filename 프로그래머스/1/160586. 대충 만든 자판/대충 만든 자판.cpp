#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    for (int i = 0; i < targets.size(); i++) {
        int totalPress = 0; // 목표 문자열을 만들기 위한 총 누름 횟수
        bool possible = true; // 목표 문자열이 작성 가능한지 여부
        
        for (int j = 0; j < targets[i].length(); j++) {
            char targetChar = targets[i][j];
            int minPress = 101; // 최소 키 누름 횟수 (기본값: 101로 설정)
            
            for (int k = 0; k < keymap.size(); k++) {
                size_t pos = keymap[k].find(targetChar);
                
                if (pos != string::npos) { // 문자가 발견된 경우
                    minPress = min(minPress, (int)(pos + 1)); // 최소 누름 횟수 갱신
                }
            }
            
            if (minPress == 101) { // 문자가 keymap에 없으면
                possible = false;
                break;
            }
            
            totalPress += minPress; // 총 누름 횟수 갱신
        }
        
        if (possible) {
            answer.push_back(totalPress);
        } else {
            answer.push_back(-1); // 목표 문자열을 만들 수 없는 경우
        }
    }
    
    return answer;
}