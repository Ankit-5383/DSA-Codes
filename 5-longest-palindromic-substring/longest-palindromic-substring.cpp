class Solution {
  bool isPalindrom(string &s, int i, int j) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    // string getstring(string s) {
    //     string res;

    //     int i = 0;
    //     int j = s.size();

    //     while (i < j) {
    //         string t = s.substr(i, j - i);
    //         if (t.size() <= res.size()) {
    //             i++;
    //             j = s.size();
    //         } else {
    //             if (isPalindrom(t)) {
    //                 if (res.size() < t.size()) {
    //                     res = t;
    //                 }
    //             }
    //             j--;
    //             if (i + 1 >= j) {
    //                 i++;
    //                 j = s.size();
    //             }
    //         }
    //     }
    //     return res;
    // }

public:
     string longestPalindrome(string s) {
        int n = s.size();
        int starting_index = 0;
        int max_len = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrom(s, i, j) && (j - i + 1 > max_len)) {
                    max_len = j - i + 1;
                    starting_index = i;
                }
            }
        }

        return s.substr(starting_index, max_len);
    }
};
