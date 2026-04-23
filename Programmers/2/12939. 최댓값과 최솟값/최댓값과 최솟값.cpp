#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    stringstream ss(s);
    string word;
    vector<string> temp;
    
    while (getline(ss, word, ' ')) {
        temp.push_back(word);
    }
    
    int min = stoi(temp[0]);
    int max = stoi(temp[0]);
    
    for(auto i: temp) {
        if(min > stoi(i) ) {
            min = stoi(i);
        }
        
        if(max < stoi(i) ) {
            max = stoi(i);
        }
        
    }
    
    return to_string(min) + " " + to_string(max);
}