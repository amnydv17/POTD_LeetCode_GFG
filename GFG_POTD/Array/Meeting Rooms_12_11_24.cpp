class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Aman Yadav
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i][1]>arr[i+1][0]) return false;
        }
        return true;
    }
};