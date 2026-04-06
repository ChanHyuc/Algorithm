#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string letter) {
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    stringstream ss(letter);
    vector<std::string> temp;
    string word;

    while (ss >> word) {
        temp.push_back(word);
    }
    
    string answer = "";
    
    for(int i = 0; i < temp.size(); i++) {
        answer += (find(morse.begin(), morse.end(), temp[i]) - morse.begin()) + 'a';
    }
    
    return answer;
}