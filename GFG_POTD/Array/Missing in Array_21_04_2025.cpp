class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // Aman Yadav
        int n = arr.size() + 1;
        int original_Sum = 0;
        for(int i = 1; i<=n; i++) original_Sum += i;
        int arr_Sum = 0;
        for(int i=0; i<n-1; i++)
        {
            arr_Sum += arr[i];
        }
        return original_Sum - arr_Sum;
    }
};