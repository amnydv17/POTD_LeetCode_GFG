class Solution {
  public:
    void solve(Node* root, int k, int currSum, unordered_map<int, int> &prefixSum, int &count)
    {
        if (!root) return;
        
        // Update the current prefix sum
        currSum += root->data;
        
        // Check if there exists a prefix sum such that removing it gives sum k
        if (prefixSum.find(currSum - k) != prefixSum.end()) {
            count += prefixSum[currSum - k];
        }
        
        // Store the current prefix sum in the map
        prefixSum[currSum]++;
        
        // Recursive calls
        solve(root->left, k, currSum, prefixSum, count);
        solve(root->right, k, currSum, prefixSum, count);
        
       
        prefixSum[currSum]--;
    }
    int sumK(Node *root, int k) {
        // Aman Yadav
        unordered_map<int, int> prefixSum;
        prefixSum[0] = 1;
        vector<int>sum;
        int count = 0;
        solve(root, k, 0, prefixSum, count);
        return count;
    }
};