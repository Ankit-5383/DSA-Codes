class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>indices;
        int i=0;
        for(string word:words){
            for(char ch:word){
                if(ch==x){
                    indices.push_back(i);
                    break;
                }
            }
            i++;
        }
        return indices;
    }
};