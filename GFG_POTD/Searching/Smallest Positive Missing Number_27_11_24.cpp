class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Aman Yadav
        sort(arr.begin(), arr.end());
        int count = 1;
        for(int i=0; i<arr.size();i++)
        {
            if(arr[i]==count)
            count++;
        }
    return count;
    }
};





class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // Aman Yadav
        int n=arr.size();
        for(int i=0;i<n;i++){
            while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        for(int i=1;i<=n;i++){
            if(i!=arr[i-1]) return i;
        }
        return n+1;
    }
};