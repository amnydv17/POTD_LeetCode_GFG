class Solution {
  public:
    int pairsum(vector<int> &arr) {
        // Aman Yadav
        int n = arr.size();
        // sort(arr.begin(), arr.end());
        // return arr[n-1] + arr[n-2];
        
        
        int first = INT_MIN;
        int second = INT_MIN;
        
        for(int i=0; i<n; i++)
        {
            if(arr[i] > first)
            {
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second)
            second = arr[i];
        }
        return first + second;
    }
};