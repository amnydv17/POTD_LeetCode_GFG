#Maximize Array Value After Rearrangement



class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // Aman Yadav 
        sort(arr.begin(), arr.end());
        long long int ans=0;
        int mod=1e9+7;
        for(int i=0;i<arr.size();i++){
            ans+=1LL*i*arr[i];
            ans%=mod;
        }
        return ans;
    }
};