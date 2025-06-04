class Solution {
    int toFindSmallEle( vector<int> &nums){
    int idx=0;
    int small = INT_MAX;
    for(int i=0;i<nums.size(); i++){
        if(small>nums[i]){
            small=nums[i];
            idx=i;
        }
    }
    return idx ;  
   }
   int toFindLargestEle(vector<int> &nums){
    int idx=0;
    int larg = INT_MIN;
    for(int i=0;i<nums.size(); i++){
        if(larg<nums[i]){
            larg=nums[i];
            idx=i;
        }
    }
    return idx ;  
   }
public:
    double minimumAverage(vector<int>& nums) {
        double res =INT_MAX;
        while(nums.size()){

            int a= toFindSmallEle(nums);
            int val1= nums[a];
            nums.erase(nums.begin() + a);
            int b= toFindLargestEle(nums);
            int val2= nums[b];
            nums.erase(nums.begin() + b);

            double avg= (val1 + val2)/2.0;
            res = min(res,avg);

        }
        
        return res;
    }
};