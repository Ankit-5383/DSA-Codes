class Solution {
    void moveTargetToRightPlace(vector<int>& nums, int target, int& i) {
        bool targetFound = false;
        int j = 0;

        while(j < nums.size()) {
            if(!targetFound) {
                while(j < nums.size() && nums[j] != target) {
                    j++;
                }
                targetFound = true;
            }
            else {
                if(nums[j] == target) {
                    swap(nums[i], nums[j]);
                    i++;
                }
                j++;
            }
        }
    }

public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        moveTargetToRightPlace(nums, 0, i);
        moveTargetToRightPlace(nums, 1, i);
    }
};