#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2;
    for(int i = 0; i < str1.length(); i++) {
        string temp = "";
        for(int j = 0; j < str2.length(); j++) {
            temp += str1[i + j];
        }
        if(temp == str2) {
            answer = 1;
            break;
        }
    }
    return answer;
}