#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i = 0; i <= myString.length(); i++) {
        if (pat == myString.substr(i, pat.length()) ) answer++;
    }
    
    return answer;
}