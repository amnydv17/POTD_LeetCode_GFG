class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // Aman Yadav
        int n = prices.size();
        int maxElement = 0;
        int maxProfit = 0;
    
        for(int i=n-1; i>=0; i--)
        {
            maxElement = max(maxElement, prices[i]);
            maxProfit = max(maxProfit, maxElement-prices[i]);
        }
    return maxProfit;
    }
};