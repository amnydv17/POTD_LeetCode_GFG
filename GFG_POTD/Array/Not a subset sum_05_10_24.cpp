class Solution {
  public:
    long long findSmallest(vector<int> &arr) {
        // Aman Yadav
        long long ans=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>ans) return ans;
            ans+=arr[i];
        }
        return ans;
    }
};