class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairsWithDiffK(vector<int>& arr, int k) {
        // Aman Yadav
        int ans = 0;
        unordered_map<int,int> mm;
        for(int x:arr)
            mm[x]++;
            
        for(int x:arr)
            ans+=mm[x+k];
            
    return ans;
    }
};