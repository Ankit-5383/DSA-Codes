class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        // Find the maximum element in nums1 and nums2
    int maxElement = max(*max_element(nums1.begin(), nums1.end()), *max_element(nums2.begin(), nums2.end()));

    // Initialize frequency vector of size maxElement + 1
    vector<int> freq(maxElement + 1, 0);
    vector<int> result;
    for (int num : nums1) {
        freq[num]++;
    }
    for (int num : nums2) {
        if (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;
        }
    }
    return result;
    }
};