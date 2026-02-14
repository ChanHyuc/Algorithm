#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string temp1 = "";
    string temp2 = "";
    
    for(auto i: myString) {
        if(i >= 'a' && i <= 'z') { 
           temp1 += i - 32;
        } else {
           temp1 += i;
        }
    }
    
    for(auto i: pat) {
        if(i >= 'a' && i <= 'z') { 
           temp2 += i - 32;
        } else {
           temp2 += i;
        }
    }
    
    return temp1.find(temp2) == string::npos ? 0 : 1;
}