class Solution {
    int n;

    vector<string> getAlternatingGroupBasedSubseq(const vector<string>& words, const vector<int>& groups, int prevGroup) {
        vector<string> subseq;

        for(int i = 0; i < n; ++i) {
            if(groups[i] != prevGroup) {
                subseq.push_back(words[i]);
                prevGroup = groups[i];
            }
        }

        return subseq;
    }

public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        n = words.size();

        vector<string> subseq1 = getAlternatingGroupBasedSubseq(words, groups, 0);
        vector<string> subseq2 = getAlternatingGroupBasedSubseq(words, groups, 1);

        return (subseq1.size() > subseq2.size()) ? subseq1 : subseq2;
    }
};