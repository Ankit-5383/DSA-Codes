class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int sz= sentences.size();
        int max_word_count=0;
        for(int i=0;i<sz;i++){
            int count=0;
            int val=sentences[i].size();
            for(int j=0;j<val;j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            max_word_count=max(max_word_count,count);
        }

        return max_word_count+1;
    }
};