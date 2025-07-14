class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k > 0) {
            int minimum = 0;

            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < nums[minimum]) {
                    minimum = i;
                }
            }

            nums[minimum] *= multiplier;
            k--;
        }

        return nums;
    }
};
