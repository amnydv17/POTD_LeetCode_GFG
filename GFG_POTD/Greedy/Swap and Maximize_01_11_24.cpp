class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // Aman Yadav
        sort(arr.begin(),arr.end());
        int i=0;
        int sum=0;
        int  n=arr.size();
        int j=arr.size()-1;
        while(i<j){
            sum+=arr[j]-arr[i];
            sum+=arr[j]-arr[i+1];
            i++;
            j--;
        }
        sum+=arr[n/2]-arr[0];
        return sum;
    }
};