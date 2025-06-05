class Solution {
    bool checkdisting(string s){
        vector<bool>alpha(26+1,false);
         for(char ch : s){
            int val = ch - 'a';
            if(alpha[val]!=true){
            alpha[val] = true;
            }else{
                return false;
            }
           
         }
        return true;
    }
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        if(s.size() < 3){
            return 0;
        }

        for(int i = 0; i < s.size() - 2; i++){
            string t = s.substr(i , 3);
            if(checkdisting(t)){
                count++;
            }
        }
        return count;
    }
};