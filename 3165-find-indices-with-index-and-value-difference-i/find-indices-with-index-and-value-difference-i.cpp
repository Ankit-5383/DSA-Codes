class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int idxDiff, int valDiff) {
      
        vector<int>ans={-1,-1};
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if( abs(i - j) >= idxDiff && abs(nums[i]-nums[j])>=valDiff ){
                   ans[0]= i;
                   ans[1] = j;
                   return ans;
                }
            }
        }
        return ans;
    }
};