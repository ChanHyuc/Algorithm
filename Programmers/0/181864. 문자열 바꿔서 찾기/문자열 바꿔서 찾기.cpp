#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string temp = "";
    for(auto i: myString) {
        i == 'A' ? temp += "B" : temp += "A";
    }
    
    return temp.find(pat) == string::npos ? 0 : 1;
}