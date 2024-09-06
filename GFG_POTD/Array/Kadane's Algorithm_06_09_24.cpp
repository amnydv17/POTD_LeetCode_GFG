class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // Aman Yadav
        long long sum=0;
        long long maxi=arr[0];
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            maxi=max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi; 
    }
};