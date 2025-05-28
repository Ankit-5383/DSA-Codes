class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
       

        while(true){
            bool isPresent = false;
           for(int val: nums){
              if(val==original){
                 original=2*original;
                 isPresent = true;
                 break;
              }
           }
           if(!isPresent){
            break;
           }
        }
        return original;
    }
};