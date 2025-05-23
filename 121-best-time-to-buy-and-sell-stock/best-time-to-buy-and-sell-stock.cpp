class Solution {
public:
    int maxProfit(vector<int>& arr) {
      
        int buy=arr[0];
        int profit=0;
        for(int i=1;i<arr.size();i++){
            buy=min(arr[i],buy);
            int val=arr[i]-buy;
            profit = max(profit, val);  
        }
        return profit;
    }
};