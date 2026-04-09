#include <string>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(auto i: s) {
        if( count(s.begin(), s.end(), i) == 1) answer += i;
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}