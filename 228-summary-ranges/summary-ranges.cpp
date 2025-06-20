class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>range;

        int i=0;
       

        while(i < nums.size()){
            int j=i;
           while (j + 1 < nums.size() && nums[j] + 1 == nums[j + 1]) {
                j++;
            }
            if(i==j)
                range.push_back(to_string(nums[j]));
            else{
                range.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
            }  
            i = j + 1;
        }
    
        return range;
    }
};