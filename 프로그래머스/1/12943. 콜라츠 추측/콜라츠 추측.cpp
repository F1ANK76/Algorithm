#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    
    long long n = num;
    
    if(n == 1) return 0;
    
    for(int i = 0; i < 500; i++)
    {
        if(n % 2 == 0) n /= 2;
        else n = (n * 3) + 1;
        
        if(n == 1) return i + 1;
    }
    
    return -1;
}