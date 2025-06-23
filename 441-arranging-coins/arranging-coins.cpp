class Solution {
public:
    int arrangeCoins(int n) {

        long long i = 0;
        long long j = n;
        
        while (i <= j) {
            long long mid = i + (j - i) / 2;
            long long sum = mid * (mid + 1) / 2;
            if (sum == n) {
                return mid;
            } else if (sum < n) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return j;
    }
};