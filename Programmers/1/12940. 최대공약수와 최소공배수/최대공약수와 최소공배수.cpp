#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int GCD = 1;
    int LCM = 1;
    
    for(int i = 2; i <= m; i++) {
        if(n % i == 0 && m % i == 0) {
            GCD = i;
        }
    }
    
    for(int i = 2; i <= n * m; i++) {
        if(i % n == 0 && i % m == 0) {
            LCM = i;
            break;
        }
    }
    
    answer.push_back(GCD);
    answer.push_back(LCM);
    
    return answer;
}