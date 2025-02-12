class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void solve(Node* root, vector<int>&ans)
    {
        if(root == NULL) return;
        
        solve(root->left, ans);
        ans.push_back(root->data);
        solve(root->right, ans);
    }
    int kthSmallest(Node *root, int k) {
        // Aman Yadav
        // if IT IS BST then inorder traversal is sorted then store in vector and return vector[k-1 element]
        
        vector<int>ans;
        solve(root, ans);
        int n = ans.size();
        if(n < k) return -1;
        return ans[k-1];
        
    }
};