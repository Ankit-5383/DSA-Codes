class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);

        leftSum[0] = 0;
        rightSum[n - 1] = 0;

        int j = n - 2;
        for (int i = 1; i < n; ++i) {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
            rightSum[j] = rightSum[j + 1] + nums[j + 1];
            j--;
        }

        for (int i = 0; i < n; ++i) {
            nums[i] = abs(leftSum[i] - rightSum[i]);
        }

        return nums;
    }
};
