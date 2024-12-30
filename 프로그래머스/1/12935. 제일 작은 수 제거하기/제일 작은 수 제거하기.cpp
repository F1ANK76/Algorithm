#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> arr) {

    // 가장 작은 수를 찾습니다.
    int minElement = *std::min_element(arr.begin(), arr.end());
    
    // 가장 작은 수를 배열에서 제거합니다.
    arr.erase(std::remove(arr.begin(), arr.end(), minElement), arr.end());

    // 배열이 비어 있으면 [-1]을 리턴
    if (arr.empty()) {
        return {-1};
    }

    // 배열에 가장 작은 수를 제거한 결과를 리턴
    return arr;
}
