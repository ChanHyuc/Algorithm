#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for(int i = 0; i < queries.size(); i++) {
        string temp = "";
        
        for(int j = queries[i][1]; j >= queries[i][0]; j--) {
            temp += my_string[j];
        }
        my_string.erase(queries[i][0], queries[i][1] - queries[i][0] + 1);
        my_string.insert(queries[i][0], temp);
    }
    
    return my_string;
}