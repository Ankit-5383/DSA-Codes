class Solution {
public:
    int firstUniqChar(string s) {

        vector<int>freq(26 ,0);

        for(char ch: s){
            int val= ch-'a';
            freq[val]++;
        }

        for(int i=0;i<s.size();i++){
            int val=s[i]-'a';
            if(freq[val]==1){
                return i;
            }
        }
        return -1;
    }
};