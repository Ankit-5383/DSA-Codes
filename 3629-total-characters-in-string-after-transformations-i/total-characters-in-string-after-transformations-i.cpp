class Solution {
public:
    int lengthAfterTransformations(const string& s, int t) {
        vector<size_t> prevFreq(26);
        for(char ch : s) {
            prevFreq[ch - 'a']++;
        }
        const size_t MOD = 1e9+7;
        while(t--) {
            vector<size_t> currFreq(26);

            for(size_t ch = 0; ch < 26; ++ch) {
                if(ch == 25 && prevFreq[ch] > 0) { // 'z'
                    currFreq[0] = (currFreq[0] + prevFreq[ch]) % MOD;
                    currFreq[1] = (currFreq[1] + prevFreq[ch]) % MOD;
                }
                else if(prevFreq[ch] > 0) {
                currFreq[ch + 1] = (currFreq[ch + 1] + prevFreq[ch]) % MOD;
                }
            }

            prevFreq = currFreq;
        }

        size_t resLength = 0;
        for(size_t f : prevFreq) {
            resLength = (resLength + f) % MOD;
        }

        return resLength;
    }
};