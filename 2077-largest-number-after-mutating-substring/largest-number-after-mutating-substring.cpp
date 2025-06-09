class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        string result = num;
        bool started = false;

        for (int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';
            int newDigit = change[digit];

            if (newDigit > digit) {
                result[i] = newDigit + '0';
                started = true;
            } else if (newDigit == digit && started) {
                result[i] = newDigit + '0'; 
            } else if (started) {
                break; 
            }
        }

        return result;
    }
};
