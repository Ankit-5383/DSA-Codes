class Solution {
public:
    vector<vector<int>> substringXorQueries(string s, vector<vector<int>>& queries) {
        unordered_map<int, pair<int, int>> xorMap;
        int n = s.size();

        // Build map of all substrings up to 30 bits (max 10^6 for int XOR)
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                xorMap.emplace(0, make_pair(i, i));
                continue;
            }

            int val = 0;
            for (int j = i; j < n && j - i < 30; ++j) {
                val = (val << 1) | (s[j] - '0');
                if (xorMap.find(val) == xorMap.end()) {
                    xorMap[val] = {i, j};
                }
            }
        }

        vector<vector<int>> result;
        for (auto& q : queries) {
            int target = q[0] ^ q[1];
            if (xorMap.find(target) != xorMap.end()) {
                auto& [i, j] = xorMap[target];
                result.push_back({i, j});
            } else {
                result.push_back({-1, -1});
            }
        }

        return result;
    }
};