class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        vector<int> result;
        int indexCount = 0;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        if (nums1 == nums2) {
            return nums1;
        }
        for (int i = 0; i < sz1; i++) {
            if(count(nums2.begin(),nums2.end(), nums1[i])>0){
                if(count(result.begin(),result.end(),nums1[i])==0){
                    result.push_back(nums1[i]);
                }
            }
        }

        return result;
    }
};