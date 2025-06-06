class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       int i = 0;
    while (i < nums.size()) {
        if (nums[i] - 1 == i) {
            i++;
        } else {
            int idx = nums[i] - 1;
            if (nums[i] == nums[idx]) {
                return nums[i];  
            }
            swap(nums[i], nums[idx]);
        }
    }
    return -1;  
}
};