class Solution {
     void moveZeros( vector<int>& nums){
        int size= nums.size();
        int i=0;
        int j=1;
        while(i<size && j<size) {
            if(nums[i]==0 && nums[j]==0){
                j++;
            }
            else if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
     }
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n= nums.size();

        for(int i=0;i<n-1;i++){
            if(nums[i]!=0 && nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        moveZeros(nums);
        return nums;


    }
};