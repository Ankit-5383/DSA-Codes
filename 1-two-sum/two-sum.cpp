class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int sz=nums.size();
        
        unordered_map<int ,int>seen;

        for(int j=0;j<sz;j++)
        {
            int thrid = target-nums[j];
            if(seen.count(thrid)){
                int i =seen[thrid];

                return {i,j};
            }
            else{
                seen[nums[j]]=j;
            }
        }

        return {-1,-1};
    }
};