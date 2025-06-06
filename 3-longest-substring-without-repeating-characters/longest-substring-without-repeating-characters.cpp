class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = 0;  
        for (int i = 0; i < s.size(); i++) {
            string res; 
            res.push_back(s[i]);

            // Check if character is repeated
            if (res.find(s[i]) == 0) {
                sz = max(sz, (int)res.size());
            }

            for (int j = i + 1; j < s.size(); j++) { 
                // Check if s[j] already exists in res
                if (res.find(s[j]) != string::npos) break;

                res.push_back(s[j]);

                sz = max(sz, (int)res.size());
            }
        }

        return sz;
    }
};
