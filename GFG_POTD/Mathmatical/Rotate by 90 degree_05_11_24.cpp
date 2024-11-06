void rotate(vector<vector<int> >& mat) {
    // Aman Yadav
    
    int n=mat.size();
    
    //step 1 transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
        
    }
    
    //step2 reverse;
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}