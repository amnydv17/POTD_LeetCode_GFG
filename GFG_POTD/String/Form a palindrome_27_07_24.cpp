class Solution{
  public:
  int LCS(int n, string str, string rev)
  {
      int dp[n+1][n+1];
      
      // base case
      for(int i=0; i<=n; i++)
      {
        for(int j=0; j<=n;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
        }
      }
      
      // Recursive Case
      for(int i=1;i<=n;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if(str[i-1]==rev[j-1])
              {
                  dp[i][j]= 1 + dp[i-1][j-1];
              }
             else{
                 dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
             }
          }
      }
     return dp[n][n];
      
  }
    int countMin(string str){
    //Aman Yadav
    int n = str.length();
    
    string rev = str;
    reverse(rev.begin(), rev.end());
    
    return n-LCS(n, str, rev);
    }
};