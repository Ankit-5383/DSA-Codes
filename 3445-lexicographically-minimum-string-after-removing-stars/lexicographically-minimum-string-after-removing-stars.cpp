class Solution {
public:
    string clearStars(string s) {
        int n = s.size();
        vector<bool> isRemoved(n, false);
        vector<vector<int>> charIndices(26);

        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                for (int j = 0; j < 26; j++) {
                    if (!charIndices[j].empty()) {
                        int lastIdx = charIndices[j].back();
                        charIndices[j].pop_back();
                        isRemoved[lastIdx] = true;
                        break;
                    }
                }
            } else {
                charIndices[s[i] - 'a'].push_back(i);
            }
        }

        string result;
        for (int i = 0; i < n; i++) {
            if (s[i] != '*' && !isRemoved[i]) {
                result += s[i];
            }
        }

        return result;
    }
};
