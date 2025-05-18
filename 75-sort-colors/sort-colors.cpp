class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        // Find index of first zero
        int j = 0;
        while(j < n && nums[j] != 0) {   
            j++;
        }
        // Place all the zeros at beginning of array
        int i = 0;
        while(j < n) {
            if(nums[j] == 0) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }

        // Find index of first one
        j = 0;
        while(j < n && nums[j] != 1) {   
            j++;
        }
        // Place all the ones at beginning of array
        while(j < n) {
            if(nums[j] == 1) {
                swap(nums[i], nums[j]);
                i++;
            }
            j++;
        }
    }
};