class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int idxDiff, int valDiff) {

      vector<int>ans={-1,-1};
      if(nums.size()==1 && idxDiff==0 &&valDiff==0 ){
            ans[0] = 0;
            ans[1] = 0;
            return ans;
        }
      int i=0;
      int j=nums.size()-1;
      while(i < j){
         if(abs(i-j)>=idxDiff  && abs(nums[i]-nums[j])>=valDiff){
            ans[0]=i;
            ans[1]=j;
            return ans;
         }
           j--;
         if (i >= j) {  
            ++i;
            j = nums.size() - 1;
         }
      }
      return ans;
    }
};