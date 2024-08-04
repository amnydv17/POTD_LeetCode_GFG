class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        // Aman Yadav
        int n = mat.size();
        int a = 0;
        int b = n-1;
        
        while(a<b)
        {
            if(mat[a][b]==1)
            {
                a++;
            }
            else
            {
                b--;
            }
        }
        for(int i=0;i<n;i++)
        {
            if((i!=a) && (mat[a][i] == 1 || mat[i][a] == 0))
            return -1;
        }
    return a;
    }
};