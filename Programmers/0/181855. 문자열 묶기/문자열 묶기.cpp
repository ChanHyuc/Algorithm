#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> v(31);
    
    for(int i = 0; i < strArr.size(); i++) {
        v[strArr[i].size()] += 1;
    }
    
    for(auto i: v) {
        if (answer < i) answer = i;
    }
    
    return answer;
}