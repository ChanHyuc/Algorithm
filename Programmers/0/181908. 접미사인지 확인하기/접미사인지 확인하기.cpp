#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    int length = my_string.length();
    
    for(int i = 0; i < length; i++) {
        if(my_string.substr(i, length) == is_suffix) {
            answer = 1;
            break;
        }
    }
    
    return answer;
}