class Solution {
  public:
     int n,m;
    // create vector for direction
    vector<vector<int>>dir{{1,0},{-1,0},{0,-1},{0,1},{1,1},{-1,-1},{1,-1},{-1,1}};
    void solve(vector<vector<char>>& grid, int i, int j)
    {
        // base case
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j] == 'W')
        return;
        
        grid[i][j] = 'W'; // making land to water for no again visit
        for(auto &it : dir)
        {
            int newI = i + it[0];
            int newJ = j + it[1];
        solve(grid , newI, newJ);
        }
    }
    
    
    
    int countIslands(vector<vector<char>>& grid) {
        //Aman Yadav
        n = grid.size();
        m = grid[0].size();
        int count = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j] = 'L')
                {
                    solve(grid, i, j);
                    count++;
                }
            }
        }
    return count;
        
    }
};