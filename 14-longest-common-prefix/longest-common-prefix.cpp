class Solution {
    int findTheIndex(vector<string> arr) {
        int min = INT_MAX;
        int index = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (min > arr[i].size()) {
                min = arr[i].size();
                index = i;
            }
        }
        return index;
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        if (sz == 0) return "";  
        int index = findTheIndex(strs);
        string word = strs[index];

        string result;
        for (int j = 0; j < word.size(); j++) {  
            char c = word[j];
            for (int i = 0; i < sz; i++) {
                if (strs[i][j] != c) {  
                    return result;
                }
            }
            result.push_back(c); 
        }
        return result;
    }
};