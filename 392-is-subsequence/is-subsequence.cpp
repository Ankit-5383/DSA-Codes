class Solution {
public:
    bool isSubsequence(string s, string t) {

        int count=0;
        int k=0;
     for(int i=0;i<s.size();i++){
        char ch=s[i];
        for(int j=k;j<t.size();j++){
            if(t[j]==ch){
                count++;
                k=j+1;
                break;
            }
        }
     }   
      return (count==s.size()) ? true : false;
    }
};