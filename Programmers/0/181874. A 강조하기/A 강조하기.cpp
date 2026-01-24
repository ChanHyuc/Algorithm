#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i = 0; i < myString.length(); i++) {
        if(myString[i] == 97) {
            answer += 'A';
        } else if(myString[i] > 65 && myString[i] < 91) {
            answer += myString[i] + 32;
        } else {
            answer += myString[i];
        }
    }
    return answer;
}