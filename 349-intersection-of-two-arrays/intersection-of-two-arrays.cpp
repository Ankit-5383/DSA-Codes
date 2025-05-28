class Solution {
    int maxSize;

   bool Findfreq( vector<int>check,int ele){
    for(int num : check) if(num == ele) return true;
    return false;
    }
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
                if (nums1 == nums2) {
            return nums1;
        }
        int n = nums1.size();
        int m = nums2.size();
        

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        maxSize = max(nums1[n - 1], nums2[m-1]) + 1;
        vector<int> result;
        vector<int>freq2(maxSize,0);

        //for nums2
        for(int i=0;i<m;i++){
            int val=nums2[i];
            freq2[val]++;
        }

        for (int i = 0; i < n; i++) {
            int val=nums1[i];
            if(freq2[val]>0){
                if(!Findfreq(result,val)){
                    result.push_back(val);
                }
            }
        }

        return result;
    }
};