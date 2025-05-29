class Solution {
public:
    int findMaxK(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int res = -1;
        for (int i : nums) {
            if (i < 0) {
                int a=abs(i);
                int s = 0;
                int e= nums.size() - 1;
                while (s <= e) {
                    int mid = s + (e - s) / 2;
                    if (nums[mid] == a) {
                        res = max(res, a);
                        break;
                    }
                    else if(nums[mid]>a){
                        e=mid-1;
                    }
                    else{
                        s=mid+1;
                    }
                }
            }
        }
        return res > 0 ? res : -1;
    }
};
