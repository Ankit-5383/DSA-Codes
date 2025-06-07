class Solution {
public:
    string toLowerCase(string s) {
        string res;
        int i=0;
        while(i<s.size()){
             if(s[i] >= 65 && s[i]<=90){
                s[i]=s[i]+32;
             }
             i++;
        }

        return s;
    }
};