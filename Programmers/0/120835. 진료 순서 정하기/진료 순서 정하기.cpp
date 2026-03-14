#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    vector<int> result = emergency;
    sort(result.begin(), result.end(), greater<int>());
    
    for(int i = 0; i < emergency.size(); i++) {
        for(int j = 0; j < emergency.size(); j++) {
            if(emergency[i] == result[j]) answer[i] = j + 1;
        }
    }
    
    return answer;
}
