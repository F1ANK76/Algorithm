#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxWidth = 0;
    int maxHeight = 0;
    
    for(int i = 0; i < sizes.size(); i++)
    {
        // 가로와 세로 중 더 큰 값을 가로로, 작은 값을 세로로 배치
        int width = max(sizes[i][0], sizes[i][1]);
        int height = min(sizes[i][0], sizes[i][1]);
        
        // 최대 가로와 세로 값을 갱신
        maxWidth = max(maxWidth, width);
        maxHeight = max(maxHeight, height);
    }
    
    return maxWidth * maxHeight;
}