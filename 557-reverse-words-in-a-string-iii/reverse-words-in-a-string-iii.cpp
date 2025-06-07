class Solution {
public:

    void rev(string &s,int st,int e){
        while(st <= e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }

    string reverseWords(string s) {
        int st=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                rev(s,st,i-1);
                st=i+1;
            }
        }
        rev(s,st,s.length()-1);
        return s;
    }
};