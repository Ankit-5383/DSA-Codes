class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();

        vector<int> commons, visited(1001);

        for(int num1 : nums1)
            for(int num2 : nums2)
                if(!visited[num1] && num1 == num2)
                    commons.push_back(num1),
                    visited[num1] = 1;

        return commons;
    }
};