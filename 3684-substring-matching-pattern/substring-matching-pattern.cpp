class Solution {
    string findTheStar(string& p, bool toFindBefore) {
        string res;
        for (int i = (toFindBefore ? 0 : p.size() - 1);(toFindBefore ? i < p.size() : i >= 0);(toFindBefore ? i++ : i--)) {
            if (p[i] == '*') {
                break;
            }
            res.push_back(p[i]);
        }
        if (!toFindBefore) {
            reverse(res.begin(), res.end());
        }
        return res;
    }
public : bool hasMatch(string s, string p) {

    string befor = findTheStar(p,true);
    string after = findTheStar(p,false);

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
}
;