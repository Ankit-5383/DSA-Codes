class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = 0;  
        for (int i = 0; i < s.size(); i++) {
            string res; 
            res.push_back(s[i]);

            // Create a set to track characters in the current substring
            unordered_set<char> seen;
            seen.insert(s[i]);

            sz = max(sz, (int)res.size());

            for (int j = i + 1; j < s.size(); j++) { 
                // If character is already seen, break
                if (seen.count(s[j])) break;

                res.push_back(s[j]);
                seen.insert(s[j]);

                sz = max(sz, (int)res.size());
            }
        }

        return sz;
    }
};
