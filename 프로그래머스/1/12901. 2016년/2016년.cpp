#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(int a, int b) {
    map<int, int> myMap;
    string answer = "";
    int temp = b - 1;
    
    myMap[1] = 31;
    myMap[2] = 29;
    myMap[3] = 31;
    myMap[4] = 30;
    myMap[5] = 31;
    myMap[6] = 30;
    myMap[7] = 31;
    myMap[8] = 31;
    myMap[9] = 30;
    myMap[10] = 31;
    myMap[11] = 30;
    myMap[12] = 31;
    
    for(int i = 1; i < a; i++)
    {
        temp += myMap[i];
    }
    
    if(temp % 7 == 0) answer = "FRI";
    else if(temp % 7 == 1) answer = "SAT";
    else if(temp % 7 == 2) answer = "SUN";
    else if(temp % 7 == 3) answer = "MON";
    else if(temp % 7 == 4) answer = "TUE";
    else if(temp % 7 == 5) answer = "WED";
    else if(temp % 7 == 6) answer = "THU";
    
    return answer;
}