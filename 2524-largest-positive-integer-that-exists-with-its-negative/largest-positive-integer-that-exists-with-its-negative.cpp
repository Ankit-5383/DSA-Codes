class Solution {
    bool FindNum(vector<int>&nums, int a ){
        for(int i: nums){
            if(i==a)
              return true;
        }
        return false;
    }
public:
    int findMaxK(vector<int>& nums) {
        int res=-1;
        for(int val: nums){
            if(val<0){
                int a =val * (-1);
                if(FindNum(nums,a )){
                    res =max(res, a);
                }
            }
        }
        return res >= 0 ? res : -1;
    }
};