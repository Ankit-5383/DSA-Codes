class Solution {
public:
    int romanToInt(string s) {

        vector<pair<char, int>> sys = {{'I', 1},   {'V', 5},   {'X', 10},
                                       {'L', 50},  {'C', 100}, {'D', 500},
                                       {'M', 1000}};

        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            int j = 0;
            int a = 0, b = 0;

            while (j < sys.size()) {
                if (s[i] == sys[j].first) {
                    a = sys[j].second;
                    break;
                }
                j++;
            }

            if (i + 1 < s.size()) {
                j = 0;
                while (j < sys.size()) {
                    if (s[i + 1] == sys[j].first) {
                        b = sys[j].second;
                        break;
                    }
                    j++;
                }
            } else {
                b = 0;
            }

            if (a >= b) {
                res += a;
            } else {
                res -= a;
                res += b;
                i++;
            }
        }

        return res;
    }
};
