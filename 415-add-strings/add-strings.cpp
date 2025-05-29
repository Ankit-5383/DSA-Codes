class Solution {
    char IntToStr(int a) {
        char ch = a + '0';
        return ch;
    }

public:
    string addStrings(string s1, string s2) {
         int i = s1.size() - 1;
        int j = s2.size() - 1;
        int carry = 0;
        string res;

      while (i >= 0 || j >= 0 || carry > 0) {
            int a = (i >= 0) ? (s1[i] - '0') : 0;
            int b = (j >= 0) ? (s2[j] - '0') : 0;

            int sum = a + b + carry;
            res.push_back(IntToStr(sum % 10));
            carry = sum / 10;

            i--;
            j--;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};