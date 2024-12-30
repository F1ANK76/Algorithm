#include <vector>
#include <numeric> // accumulate 사용을 위한 헤더

int solution(std::vector<int> numbers) {
    // 0부터 9까지의 합
    int totalSum = 45; // 0 + 1 + 2 + ... + 9 = 45
    
    // 주어진 numbers 배열의 합을 구합니다.
    int numbersSum = std::accumulate(numbers.begin(), numbers.end(), 0);
    
    // 0부터 9까지의 합에서 numbers 배열의 합을 빼면, 빠진 숫자들의 합이 나옵니다.
    return totalSum - numbersSum;
}
