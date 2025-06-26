class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
         vector<int> result(nums.size());

        int posptr = 0;
        int negptr = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] < 0) {
                result[negptr] = nums[i];
                negptr+=2;
            } else {
                result[posptr] = nums[i];
                posptr+=2;
            }
        }

        return result;
    }
};