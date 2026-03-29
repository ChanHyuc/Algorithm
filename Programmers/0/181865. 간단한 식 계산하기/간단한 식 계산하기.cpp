#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    vector<string> temp;
    
    stringstream ss(binomial);
    string buffer;
    
    while (ss >> buffer) {
        temp.push_back(buffer);
    }
    
    switch(temp[1][0]) {
        case '+':
            return stoi(temp[0]) + stoi(temp[2]);
            break;
        case '-':
            return stoi(temp[0]) - stoi(temp[2]);
            break;
        case '*':
            return stoi(temp[0]) * stoi(temp[2]);
            break;
    }
}