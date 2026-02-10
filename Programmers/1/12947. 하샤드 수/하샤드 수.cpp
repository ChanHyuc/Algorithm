#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string temp = to_string(x);
    int num = 0;
    
    for(auto i: temp) {
        num += i - '0';
    }
    
    return x % num == 0 ? true : false;
}