#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int temp = 0;
    
    for(int i = 1; i <= 1024; i *= 2) {
        if(i >= arr.size() ) {
            temp = i;
            break;
        }
    }
    
    for(int i = 0; i < temp; i++) {
        if (i < arr.size()) {
            answer.push_back(arr[i]);
        } else {
            answer.push_back(0);
        }
    }
    
    return answer;
}