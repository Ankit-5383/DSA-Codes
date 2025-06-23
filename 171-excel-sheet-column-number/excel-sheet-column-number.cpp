class Solution {
public:
    int titleToNumber(string s) {
        int n=s.size();
        long long res=0;
        if(n==1){
            return s[0]-'A'+1;
        }
        for(int i=n-1;i>=0;i--){
            int val = s[i]-'A'+1;
            if(res == 0) {
            res += val;
            }
            else 
            res += val * pow(26, n-1-i);


        }
        return res;
    }
};