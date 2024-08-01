class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        // Aman Yadav
        int row=matrix.size();
        int col=matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        vector<int>ans;
        
        int firstRow=0;
        int firstCol=0;
        int lastRow=row-1;
        int lastCol=col-1;
        
        
        
        while(count<total)
        {
            
            for(int i=firstCol;i<=lastCol && count< total;i++)
            {
                ans.push_back(matrix[firstRow][i]);
                count++;
            }
            firstRow++;
            
            for(int i=firstRow;i<=lastRow && count< total;i++)
            {
                ans.push_back(matrix[i][lastCol]);
                count++;
            }
            lastCol--;
            
            for(int i=lastCol;i>=firstCol && count< total;i--)
            {
                ans.push_back(matrix[lastRow][i]);
                count++;
            }
            lastRow--;
            
            for(int i=lastRow;i>=firstRow && count< total;i--)
            {
                ans.push_back(matrix[i][firstCol]);
                count++;
            }
            firstCol++;
        }
    return ans;
    }
};