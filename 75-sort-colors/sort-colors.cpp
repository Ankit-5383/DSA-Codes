class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int ones = 0, zeros = 0, twos = 0;

        for(int num : nums)
            (num == 0 ? zeros++ : (num == 1 ? ones++ : twos++));

        int i = 0;
        while(zeros--) nums[i++] = 0;
        while(ones--)  nums[i++] = 1;
        while(twos--)  nums[i++] = 2;
    }
};