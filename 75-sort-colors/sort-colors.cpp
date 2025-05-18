class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> freq(3);

        for(int num : nums)
            freq[num]++;

        int i = 0;
        for(int num = 0; num < 3; ++num)
            while(freq[num]--)
                nums[i++] = num;
    }
};