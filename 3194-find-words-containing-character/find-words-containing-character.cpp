class Solution {
public:
    vector<int> findWordsContaining(vector<string>& word, char x) {
        vector<int>indices;

        for(int i=0;i<word.size();i++){
            for(int j=0;j<word[i].size();j++){
                if(word[i][j]==x){
                indices.push_back(i);
                break;
                }
            }
        }
        return indices;
    }
};