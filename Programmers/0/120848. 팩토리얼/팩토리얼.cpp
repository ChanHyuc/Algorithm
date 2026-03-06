#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int num = 1;
    
    while(1){
        
        int temp = 1;
        
        for(int i = 1; i <= num; i++) temp *= i;
        
        if (temp > n) return num - 1;
        if (temp == n) return num;
            
        num++;
    }
    
}