#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> temp;
    
    for(int i = 0; i < score.size(); i++)
    {
        if(temp.size() < k) temp.push_back(score[i]);
        else
        {
            sort(temp.begin(), temp.end());
            if(temp[0] < score[i]) temp[0] = score[i];
        }
        
        answer.push_back(*min_element(temp.begin(), temp.end()));
    }
    
    return answer;
}