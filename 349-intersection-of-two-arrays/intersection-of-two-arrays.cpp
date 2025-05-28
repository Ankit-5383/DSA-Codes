class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> isPresent(1001);
        for(int num2 : nums2)
            isPresent[num2] = 1;

        vector<int> commons;
        for(int num : nums1)
            if(isPresent[num])
                commons.push_back(num),
                isPresent[num] = 0;

        return commons;
    }
};