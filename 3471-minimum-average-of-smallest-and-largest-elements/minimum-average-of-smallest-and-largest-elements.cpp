class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double res=DBL_MAX;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(i<j){
             double val = (nums[i]+nums[j]) / 2.0;
             if(res>val){
                res=val;
             }
             i++;
             j--;
        }
        return res;
    }
};