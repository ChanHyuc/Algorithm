#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int temp = abs(array[0] - n);
    for(int i = 1; i < array.size(); i++) {
        if ( abs(array[i] -n) == temp && answer > array[i] ) {
            answer = array[i];
            temp = abs(array[i] - n);
        }
        else if( abs(array[i] - n) < temp) {
            answer = array[i];
            temp = abs(array[i] - n);
        } 
    }
    return answer;
}