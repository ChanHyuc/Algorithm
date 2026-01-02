class Solution {
public:
    int lengthOfLastWord(string s) {
        int answer = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(answer == 0 && s[i] == ' ') {
                continue;
            } else if (answer != 0 && s[i] == ' ') {
                break;
            } else {
                answer++;
            }
        }
        return answer;
    }
};