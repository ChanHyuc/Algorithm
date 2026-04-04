#include <string>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    string temp = "";
    
    for(int i = 1; i <= my_string.size(); i++) {
        temp += my_string[i - 1];
        
        if(i % m == 0) {
            answer += temp[c - 1];
            temp = "";
        }
    }
    
    return answer;
}