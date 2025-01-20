#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sums;  // 중복을 제거하기 위해 set 사용
    
    // 두 수의 합을 구하는 이중 for문
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            sums.insert(numbers[i] + numbers[j]);  // 두 수의 합을 set에 넣음
        }
    }
    
    // set을 vector로 변환하여 결과 반환
    vector<int> result(sums.begin(), sums.end());
    return result;
}