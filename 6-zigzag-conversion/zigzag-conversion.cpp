class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) return s;

        vector<string> rows(numRows);
        int i = 0;
        bool goingDown = false;

        for (char ch : s) {
            rows[i] += ch;
            if (i == 0 || i == numRows - 1) goingDown = !goingDown;
            i += goingDown ? 1 : -1;
        }

        string result;
        for (const auto& row : rows) result += row;
        return result;
    }
};