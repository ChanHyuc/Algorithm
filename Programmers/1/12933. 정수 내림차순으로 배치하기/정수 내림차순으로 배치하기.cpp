#include <string>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string temp = "";
    
     while(n != 0) {
        temp += to_string(n % 10);
        n = n / 10;
    }
    
    sort(temp.begin(), temp.end(), greater<>());
    
    answer = stoll(temp);
    
    return answer;
}
