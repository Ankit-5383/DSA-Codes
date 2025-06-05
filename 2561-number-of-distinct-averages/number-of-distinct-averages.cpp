class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double> numset;  
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            double val = (nums[i] + nums[j]) / 2.0;
            numset.insert(val);  
            i++;
            j--;
        }
         return numset.size();
    }
};