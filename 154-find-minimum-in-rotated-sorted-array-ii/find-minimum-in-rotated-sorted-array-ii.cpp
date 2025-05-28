class Solution {
public:
    int findMin(vector<int>& nums) {
        int res=INT_MAX;

      for(int num: nums){
        res=min(res,num);
      }
      return res;
    }
};