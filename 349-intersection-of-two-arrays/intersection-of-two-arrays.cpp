class Solution {
public:
   

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int sz1 = nums1.size();
    int sz2 = nums2.size();
    vector<int> result;
    int indexCount = 0;  

    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    if (nums1==nums2){
        return nums1;
    }

        for (int i = 0; i < (sz1 < sz2 ? sz1 : sz2); i++) {
            for (int j = indexCount; j < (sz1 < sz2 ? sz2 : sz1); j++) {
                if ((sz1 < sz2 ? nums1[i] == nums2[j] 
                               : nums2[i] == nums1[j])) {
                    int val = count(result.begin(), result.end(), (sz1 < sz2 ? nums2[j] : nums1[j]));  
                    if (val == 0) {
                        result.push_back(sz1 < sz2 ? nums2[j] : nums1[j]);
                        indexCount = j + 1; 
                        break;
                    }
                }
            }
        }
    return result;
}

};