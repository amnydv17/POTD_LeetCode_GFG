class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = heights.size();
       vector<int> index(n);
        
        // Initialize the index array
       iota(index.begin(), index.end(), 0);
        
        // Sort the index array based on the heights in descending order
       sort(index.begin(), index.end(), [&heights](int a, int b) {
            return heights[a] > heights[b];
        });
        
        vector<string> res(n);
        
        // Populate the result array with names in the sorted order
        for (int i = 0; i < n; ++i) {
            res[i] = names[index[i]];
        }
        
        return res;
    }
};