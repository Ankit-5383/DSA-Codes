class Solution {
public:
    string addBinary(const string& num1, const string& num2) {
        int i = num1.size() - 1, j = num2.size() - 1;
        int carry = 0;

        string result;

        while(i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? num1[i] - '0' : 0;
            int bit2 = (j >= 0) ? num2[j] - '0' : 0;
            int sum = bit1 + bit2 + carry;
            i--, j--;

            carry = 0;
            if(sum == 3) sum = 1, carry = 1;
            else if(sum == 2) sum = 0, carry = 1;

            result += to_string(sum);
        }

        reverse(begin(result), end(result));
        return result; 
    }
};