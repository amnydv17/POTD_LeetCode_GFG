class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size(); 


        long long sum = 0;
        int negCount = 0;
        int smallestAbsValue = INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=0; j<n;j++)
            {
                sum += abs(matrix[i][j]);

                if(matrix[i][j] < 0)
                {
                    negCount++;
                }

                smallestAbsValue = min(smallestAbsValue, abs(matrix[i][j]));
            }
        }

        if(negCount% 2 ==0)
        {
            return sum;
        }
        
        return sum-2*smallestAbsValue;
    }
};