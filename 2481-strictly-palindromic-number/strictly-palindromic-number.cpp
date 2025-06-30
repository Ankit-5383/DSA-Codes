class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int num = 0;
        string numstr = "";

        while (n >= 1) {

            numstr = numstr+to_string((n%10));
            n = n / 2;
        }
        int start = 0;
        int end = numstr.size() - 1;
        while (start < end) {
            if (numstr[start] != numstr[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};