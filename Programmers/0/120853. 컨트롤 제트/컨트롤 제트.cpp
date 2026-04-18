#include <string>
#include <sstream>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int temp = 0;
    
    stringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }
    
    for(auto i: words) {
        if(i == "Z") {
            answer -= temp;
        } else {
            answer += stoi(i);
            temp = stoi(i);
        }
    }
    
    return answer;
}