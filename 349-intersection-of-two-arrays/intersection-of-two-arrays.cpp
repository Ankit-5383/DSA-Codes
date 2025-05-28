class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         if (nums1 == nums2) 
            return nums1;

        vector<int> result;
       
        for (int i = 0; i < nums1.size(); i++) 
            if(count(nums2.begin(),nums2.end(), nums1[i])>0)
                if(count(result.begin(),result.end(),nums1[i])==0)
                    result.push_back(nums1[i]);

        return result;
    }
};