#include <string>
#include <vector>
#include <algorithm> // std::reverse

using namespace std;

int solution(int n) {
    // 1. n을 3진법으로 변환
    string ternary = "";
    while (n > 0) {
        ternary += to_string(n % 3); // 3으로 나눈 나머지를 추가
        n /= 3; // n을 3으로 나누기
    }
    
    // 2. 3진법 숫자 문자열 뒤집기
    reverse(ternary.begin(), ternary.end());

    // 3. 뒤집힌 3진법 숫자를 다시 10진법으로 변환
    int result = 0;
    int base = 1; // 3진법에서 각 자리를 10진법으로 변환하기 위한 배수 (1, 3, 9, ...)
    for (char c : ternary) {
        result += (c - '0') * base;
        base *= 3; // 각 자리의 값에 맞게 배수 증가
    }

    return result;
}