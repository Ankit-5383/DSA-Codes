class Solution {
public:
    int arrangeCoins(int n) {  
        int count = 0;
        int row = 1;

        while (n - row >= 0) {
            n -= row;
            row++;
            count++;
        }

        return count;
    }
};