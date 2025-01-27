#include <string>
#include <vector>
#include <algorithm>  // max_element 사용을 위해 포함

using namespace std;

vector<int> solution(vector<int> answers) {
    // 각 수포자가 찍는 방식 정의
    vector<int> pattern1 = {1, 2, 3, 4, 5};
    vector<int> pattern2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> pattern3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    // 각 수포자가 맞춘 개수를 셀 변수
    int count1 = 0, count2 = 0, count3 = 0;

    // 정답 배열을 순회하며 각 수포자가 맞춘 개수를 계산
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == pattern1[i % pattern1.size()]) count1++;
        if (answers[i] == pattern2[i % pattern2.size()]) count2++;
        if (answers[i] == pattern3[i % pattern3.size()]) count3++;
    }

    // 가장 많은 문제를 맞힌 수포자의 점수를 구하고,
    // 그 점수에 해당하는 수포자 번호들을 담을 벡터를 생성
    int max_count = max({count1, count2, count3});
    vector<int> result;

    if (count1 == max_count) result.push_back(1);
    if (count2 == max_count) result.push_back(2);
    if (count3 == max_count) result.push_back(3);

    return result;
}