class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size();
        long long res=0;
        if(n==1){
            return s[0]-'A'+1;
        }
        for(int i=0;i<n;i++){
            int d = s[i] - 'A' + 1;
            res = res * 26 + d;
        }
        return res;
    }
};