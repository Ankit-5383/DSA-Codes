class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int res = INT_MIN;

        while (j < nums.size()) {
            if (nums[j] == 0) {
                count++;
            }

            if (count > k) {
                for (; i < nums.size(); i++) {
                    if (nums[i] == 0) {
                        count--;
                        i++;
                        break;
                    }
                }
            }

            res = max(res, j - i + 1);
            j++;
        }

        return res;
    }
};