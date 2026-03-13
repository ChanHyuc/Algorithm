#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    for(int i = 0; i < my_str.length(); i += n) {
        string temp = "";
        for(int j = i; j < i + n; j++) {
            if (j == my_str.length()) break;
            temp += my_str[j];
        }
        answer.push_back(temp);
    }
    
    return answer;
}
