class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& n) {
        int i = 0;
        int j = n.size() - 1; 
        
        while (i < j) {
            if (n[i] % 2 != 0 && n[j] % 2 == 0) {
                swap(n[i], n[j]);
                i++;
                j--;
            }
            else {
                if (n[i] % 2 == 0) i++;  
                if (n[j] % 2 != 0) j--; 
            }
        }
        return n;
    }
};