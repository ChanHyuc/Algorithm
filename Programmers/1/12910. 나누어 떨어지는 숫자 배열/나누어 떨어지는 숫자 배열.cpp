#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(auto data: arr) {
        if (data % divisor == 0) {
            answer.push_back(data);
        }
    }
    
    sort(answer.begin(), answer.end());
    return answer.empty() ? vector<int>{-1} : answer;
}