class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int MaxWordCount = 0;
        for(int i =0; i<sentences.size(); i++){
            string sentence = sentences[i];
            int CurrentWordCount = 0;
            for(int j =0; j<sentence.size();j++){
                if(sentence[j]==' '||j==sentence.size()-1){
                    CurrentWordCount++;
                    if(CurrentWordCount>MaxWordCount)
                    {
                        MaxWordCount=CurrentWordCount;
                    }
                }
            }
        }
        return MaxWordCount;
        
    }
};