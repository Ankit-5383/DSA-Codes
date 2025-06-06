class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int evenindex = 0;
        int oddindex = 1;
        while (evenindex < nums.size() && oddindex < nums.size()) {
            if (nums[evenindex]%2==0)
                evenindex += 2;
            else if (nums[oddindex]%2 ==1)
                oddindex += 2;
            else {
                swap(nums[evenindex], nums[oddindex]);
            }
        }

        return nums;
    }
};