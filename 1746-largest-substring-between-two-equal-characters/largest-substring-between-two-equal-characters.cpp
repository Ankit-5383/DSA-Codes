class Solution {
public:
    int maxLengthBetweenEqualCharacters(string k) {
        int n = k.size();
        int len = -1;

        for(int i = 0; i < n - 1; i++){
            int s = i;
            int e = n - 1;
            while(s < e){
                if(k[s] == k[e]){
                    int val = e - s  - 1;
                    len = max(len, val);
                    break;
                }
                e--;
            }
        }
        return len;
    }
};