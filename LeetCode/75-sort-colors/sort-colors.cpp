class Solution {
    void moveTargetToRightPlace(vector<int>& nums, int target, int& i) {
        // Find the first index of target
        int j = 0;
        while(j < nums.size() && nums[j] != target)
            j++;

        // Move target to its right place from beginning
        while(j < nums.size()) {
            if(nums[j] == target) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }

public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        moveTargetToRightPlace(nums, 0, i);
        moveTargetToRightPlace(nums, 1, i);
    }
};
