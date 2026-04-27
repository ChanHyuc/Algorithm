#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 1;
    for(int i = 1; i < k; i++) {
        answer += 2;
        if(numbers.size() ==  answer - 1) {
            answer = 1;
        } else if(numbers.size() == answer - 2) {
            answer = 2;
        }
    }
    
    return answer;
}