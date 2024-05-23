class Solution{
public:
    int kPalindrome(string str, int n, int k)
    {
        // Aman Yadav
        int dp[n][n];
        memset(dp,0,sizeof dp);
        for(int i=2;i<=n;i++){
            for(int row=0;row<=n-i;row++){
                int col = row+i-1;
                if(str[row]==str[col])dp[row][col]=dp[row+1][col-1];
                else dp[row][col]=min(dp[row+1][col],dp[row][col-1])+1;
            }
        }
        return dp[0][n-1]<=k?1:0;
    }
};