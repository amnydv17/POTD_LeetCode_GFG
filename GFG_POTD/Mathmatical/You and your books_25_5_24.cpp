class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Aman Yadav
        long long ans=0,sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=k)sum+=arr[i];
            else{
                ans=max(sum,ans);
                sum=0;
            }
        }
        ans=max(sum,ans);
        return ans;
    }
};