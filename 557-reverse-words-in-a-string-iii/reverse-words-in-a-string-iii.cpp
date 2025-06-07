class Solution {
public:

    void rev(string &s ,int st,int e){
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }
    }
    string reverseWords(string s) {
        int st=0;

        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                rev(s, st,i-1);
                st=i+1;
            }
        }
        int n=s.size()-1;
        rev(s,st,n);

        return s;
    }
};