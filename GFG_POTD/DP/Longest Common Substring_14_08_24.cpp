class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // Aman Yadav
        int n = str1.size();
        int m = str2.size();
    
   
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    int ans = 0; 

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(str1[i-1] == str2[j-1]){
                int val = 1 + dp[i-1][j-1]; 
                dp[i][j] = val; 
                ans = max(ans, val); 
            }
            else
                dp[i][j] = 0; 
        }
    }
    
    return ans; 
    }
};