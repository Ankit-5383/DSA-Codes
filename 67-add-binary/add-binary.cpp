class Solution {
public:
    string addBinary(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        int i = n-1, j = m-1;
        int carry = 0;

        string result;

        while(i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? num1[i] - '0' : 0;
            int bit2 = (j >= 0) ? num2[j] - '0' : 0;
            int sum = bit1 + bit2 + carry;
            i--, j--;

            if(sum == 3) 
                sum = 1, carry = 1;
            else if(sum == 2) 
                sum = 0, carry = 1;
            else if(carry == 1)
                carry = 0;

            result += to_string(sum);
        }

        reverse(begin(result), end(result));
        return result; 
    }
};