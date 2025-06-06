class Solution {
    string joinstr(vector<string>& arr){
        string res;
        for(string str :arr)
          res.append(str);

        return res;  
    }
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string str1=joinstr(word1);
        string str2=joinstr(word2);;

        if(str1==str2)
          return true;

        return false;  
    }
};