class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicates for i

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; // skip duplicates for j

                long long newTarget = (long long)target - nums[i] - nums[j];
                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = nums[left] + nums[right];

                    if (sum == newTarget) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;

                        // skip duplicates for left
                        while (left < right && nums[left] == nums[left - 1]) left++;
                        // skip duplicates for right
                        while (left < right && nums[right] == nums[right + 1]) right--;
                    }
                    else if (sum < newTarget) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
