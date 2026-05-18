#include<iostream>

using namespace std;

int main()
{
    string inputData;
    string answer = "";
    cin >> inputData;
    for(int i = 0; i < inputData.size(); i++) {
    	if(inputData[i] >= 'a' && inputData[i] <= 'z') {
        	answer += toupper(inputData[i]);
        } else {
        	answer += inputData[i];
        }
        
    }
    cout << answer;
    return 0;
}