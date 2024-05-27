class Solution {
  public:
    int longestSubseq(int n, vector<int> &a) {
        // Aman Yadav
        int ans=0;
        unordered_map<int,int> mm;
        for(int i=0;i<n;i++){
            mm[a[i]]=max(mm[a[i]-1],mm[a[i]+1])+1;
            ans=max(ans,mm[a[i]]);
        }
        return ans;
    }
};