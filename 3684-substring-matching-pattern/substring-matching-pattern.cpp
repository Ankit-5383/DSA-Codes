class Solution {
    string Before(string p) {
        string res;
        for (int i = 0; i < p.size(); i++) {
            if (p[i] == '*') {
                break;
            }
            res.push_back(p[i]);
        }
        return res;
    }
    string After(string p) {
        string res;
        for (int i = p.size() - 1; i >= 0; i--) {
            if (p[i] == '*') {
                break;
            }
            res.push_back(p[i]);
        }
        reverse(res.begin(), res.end());
        return res;
    }

public:
    bool hasMatch(string s, string p) {

        string befor = Before(p);
        string after = After(p);

        size_t pos = s.find(befor);
        if (pos != string::npos) {
            int afterPos = s.find(after, pos + befor.size());
            if (afterPos != -1)
                return true;
            else
                return false;
        } else {
            return false;
        }

        return false;
    }
};