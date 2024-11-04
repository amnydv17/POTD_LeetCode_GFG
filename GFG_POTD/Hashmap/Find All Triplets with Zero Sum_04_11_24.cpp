class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Aman Yadav
        int size=arr.size();
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<size;i++){
            mp[arr[i]].push_back(i);
        }
        for(int i=0;i<size-2;i++){
            for(int j=i+1;j<size-1;j++){
                if(mp.find(0-(arr[i]+arr[j]))!=mp.end()){
                    for(int n:mp[0-(arr[i]+arr[j])]){
                        if(n>j){
                            ans.push_back({i,j,n});
                        }
                    }
                }
            }
        }
        return ans;
    }
};