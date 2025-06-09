class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int n = s.size();
        vector<vector<int>> prefixFreq(n + 1, vector<int>(26, 0));

        // Build prefix frequency array
        for (int i = 0; i < n; i++) {
            prefixFreq[i + 1] = prefixFreq[i];
            prefixFreq[i + 1][s[i] - 'a']++;
        }

        vector<bool> result;
        for (const auto& query : queries) {
            int left = query[0], right = query[1], k = query[2];

            // Count odd character occurrences efficiently
            int oddCount = 0;
            for (int i = 0; i < 26; i++) {
                int count = prefixFreq[right + 1][i] - prefixFreq[left][i];
                if (count % 2 != 0) {
                    oddCount++;
                }
            }

            // Minimum changes required
            int minChanges = oddCount / 2;
            result.push_back(minChanges <= k);
        }

        return result;
    }
};