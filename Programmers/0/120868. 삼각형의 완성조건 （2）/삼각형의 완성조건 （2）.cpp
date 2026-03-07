#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());
    
    answer += sides[1] - (sides[1] - sides[0]);
    answer += sides[0] + sides[1] - sides[1] - 1;
    
    return answer;
}