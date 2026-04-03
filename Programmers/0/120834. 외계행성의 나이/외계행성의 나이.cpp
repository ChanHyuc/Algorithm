#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j'};
    string temp = to_string(age);
    
    for(int i = 0; i < temp.size(); i++) {
        answer += alphabet[temp[i] - '0'];
    }
    
    return answer;
}