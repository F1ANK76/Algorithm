#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int count = 0;
    long long pValue = stoll(p);  // p를 64비트 정수로 변환
    
    int tLength = t.size();
    int pLength = p.size();
    
    // t에서 p와 같은 길이의 부분문자열을 하나씩 확인
    for (int i = 0; i <= tLength - pLength; i++) {
        string sub = t.substr(i, pLength);  // t에서 부분문자열 추출
        long long subValue = stoll(sub);    // 부분문자열을 64비트 정수로 변환
        
        if (subValue <= pValue) {
            count++;  // 조건을 만족하면 카운트
        }
    }
    
    return count;
}