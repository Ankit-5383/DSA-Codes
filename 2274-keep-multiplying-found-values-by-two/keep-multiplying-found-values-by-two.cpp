class Solution {
     bool isPresnt(vector<int>&nums ,int target){
        int s=0;
        int e=nums.size()-1;

        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return false;
     }
public:
    int findFinalValue(vector<int>& nums, int original) {

        sort(nums.begin(),nums.end());
        //1,3,5,6,12
        while(true){
         if(isPresnt(nums,original)){
            original=2*original;
         }else {
            break;
         }
        }
        return original;
    }
};