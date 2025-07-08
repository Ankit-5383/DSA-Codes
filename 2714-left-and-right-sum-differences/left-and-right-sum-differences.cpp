class Solution {
    vector<int> gentratearr(int k, vector<int>& nums, int n) {
        vector<int> result(n, 0);

        int start = (k == 1) ? 1 : n - 2;
        int end = (k == 1) ? n : -1;
        int step = (k == 1) ? 1 : -1;

        for (int i = start; i != end; i += step) {
            int from = (k == 1) ? i - 1 : i + 1;
            result[i] = result[from] + nums[from];
        }

        return result;
    }

public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefix = gentratearr(1, nums, n);
        vector<int> suffix = gentratearr(0, nums, n);

        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            result[i] = abs(prefix[i] - suffix[i]);
        }

        return result;
    }
};