#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getRank(int matchCount) {
    if (matchCount == 6) return 1;
    if (matchCount == 5) return 2;
    if (matchCount == 4) return 3;
    if (matchCount == 3) return 4;
    if (matchCount == 2) return 5;
    return 6; // 그 외는 낙첨(6등)
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int zeroCount = 0;  // 알아볼 수 없는 번호의 개수
    int matchCount = 0; // 일치하는 번호의 개수

    // lottos에서 0의 개수와 당첨 번호와 일치하는 개수를 계산
    for (int i = 0; i < 6; ++i) {
        if (lottos[i] == 0) {
            zeroCount++;
        } else if (find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end()) {
            matchCount++;
        }
    }

    // 최고 순위는 0을 모두 맞춘 경우, 최저 순위는 0을 모두 틀린 경우
    int bestRank = getRank(matchCount + zeroCount);  // 0을 다 맞춘 경우
    int worstRank = getRank(matchCount);             // 0을 다 틀린 경우

    return {bestRank, worstRank};
}