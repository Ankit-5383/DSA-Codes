class Solution {
public:
    int maxRepeating(string sequence, string word) {
        
        int sz=sequence.size();
        int count=0;
        string check=word;
        while(check.size()<=sz){
            size_t pos = sequence.find(check);
            if(pos != string::npos) {
              count++;
              check.append(word);
            }
            else{
                break;
            }
        }  
     return count>0 ? count : 0 ;
    }
};