class Solution {
    int n;

public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        n = words.size();

        int prev=0;
        vector<vector<int>>subseq(2);
        for(int i=0;i<n;i++){
            if(prev!=groups[i]){
                subseq[0].push_back(i);
                prev=groups[i];
            }
        }
        prev=1;
        for(int i=0;i<n;i++){
            if(prev!=groups[i]){
                subseq[1].push_back(i);
                prev=groups[i];
            }
        }  

        vector<string> result;
        for(int i : (subseq[0].size() > subseq[1].size() ? subseq[0] : subseq[1])) 
            result.push_back(words[i]);
        return result;
    }
};