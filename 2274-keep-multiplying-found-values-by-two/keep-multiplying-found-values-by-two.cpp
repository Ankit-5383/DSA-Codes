class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<bool>isPresent(2001);
        for(int val: nums){
            isPresent[val]=true;
        }

        while(true){
         if(isPresent[original]){
            original=2*original;
         }else {
            break;
         }
        }
        return original;
    }
};