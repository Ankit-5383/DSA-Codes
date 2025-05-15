class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        size_t n = words.size();
        size_t prevGroup0 = 0, prevGroup1 = 1;
        
        vector<string> subseq1, subseq2;

        for(size_t i = 0; i < n; ++i) {
            if(groups[i] != prevGroup0) {
                subseq1.push_back(words[i]);
                prevGroup0 = groups[i];
            }
            if(groups[i] != prevGroup1) {
                subseq2.push_back(words[i]);
                prevGroup1 = groups[i];
            }
        }

        return (subseq1.size() > subseq2.size()) ? subseq1 : subseq2;
    }
};