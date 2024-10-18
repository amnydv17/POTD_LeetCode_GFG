class Solution {
  public:
    int getSingle(vector<int>& arr) {
        // Aman Yadav
        int ans = 0;
        for(int x:arr)
        ans^=x;

        return ans;

    }
};