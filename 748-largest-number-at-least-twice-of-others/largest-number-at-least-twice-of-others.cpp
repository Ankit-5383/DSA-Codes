class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxVal = -1, maxIdx = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > maxVal) {
                maxVal = nums[i];
                maxIdx = i;
            }
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i != maxIdx && nums[i] * 2 > maxVal) {
                return -1;
            }
        }

        return maxIdx;
    }
};