#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(int i = 0; i < arr.size(); i++) {
        k % 2 == 0 ? answer.push_back(arr[i] + k) : answer.push_back(arr[i] * k);
    }
    return answer;
}