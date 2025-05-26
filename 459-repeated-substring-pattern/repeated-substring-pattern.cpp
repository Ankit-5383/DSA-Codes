class Solution {
public:
    bool repeatedSubstringPattern(string& s) {
        string res = s + s;
        int n = s.size();
        int j = 0;
        
        for (int i = 1; i < res.size() - 1; i++) {
            if (res[i] == s[j]) {
                j++;
                if (j == n) {
                    return true;
                }
            } else {
                i = i - j; 
                j = 0;   
            }
        }
        return false;
    }
};
