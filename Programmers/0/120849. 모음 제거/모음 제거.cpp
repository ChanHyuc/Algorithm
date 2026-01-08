#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
    for(int i = 0; i < my_string.length(); i++) {
        if(find(vowel.begin(), vowel.end(), my_string[i]) == vowel.end()) {
            answer += my_string[i];
        }
    }
    return answer;
}