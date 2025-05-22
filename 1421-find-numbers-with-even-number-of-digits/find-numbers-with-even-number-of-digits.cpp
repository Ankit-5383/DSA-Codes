class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int rescount=0;
        for(int val: nums){
            int count=log10(val)+1;  
            if(count%2==0) rescount++;      
        }
        return rescount;
    }
};