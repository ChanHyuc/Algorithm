#include <string>

using namespace std;

bool solution(string s) {
    
    if(s.size() != 4 && s.size() != 6) return false;
    
    for(auto i: s) {
        if( !isdigit(i) ) return false;
    }
    return true;
}