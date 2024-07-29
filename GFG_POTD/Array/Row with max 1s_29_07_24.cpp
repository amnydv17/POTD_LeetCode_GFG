class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // Aman Yadav
        int row=arr.size();
        int col = arr[0].size();
        
        int i = 0, j = col-1;
        int ans = -1;
        while(i<row && j>=0)
        {
            if(arr[i][j]==1)
            {
                ans = i;
                j--;
            }
            else
            {
                i++;
            }
        }
    return ans;
    }
};