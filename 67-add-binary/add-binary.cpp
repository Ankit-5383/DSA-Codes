class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;

        string res = "";

        bool carry = false;  // You had `true` initially — that's incorrect

        while (i >= 0 || j >= 0 || carry) {
            char ch1 = (i >= 0) ? a[i] : '0';
            char ch2 = (j >= 0) ? b[j] : '0';

            if (ch1 == '1' && ch2 == '1') {
                if (carry) {
                    res += '1';
                } else {
                    res += '0';
                    carry = true;
                }
            } else if ((ch1 == '1' && ch2 == '0') || (ch1 == '0' && ch2 == '1')) {
                if (carry) {
                    res += '0';
                    carry = true;
                } else {
                    res += '1';
                    carry = false;
                }
            } else { // both are '0'
                if (carry) {
                    res += '1';
                    carry = false;
                } else {
                    res += '0';
                }
            }

            i--;
            j--;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
