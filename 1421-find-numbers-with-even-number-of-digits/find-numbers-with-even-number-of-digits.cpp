class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int val : nums){
           string num=to_string(val);
           if( num.size()%2==0){
            count++;
           }
        }
        return count;
    }
};