#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int length = myString.rfind(pat) + pat.length() - 1;
    
    for(int i = 0; i <= length; i++) answer += myString[i];
    
    return answer;
}