class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool solve(Node * root, int mini, int maxi)
    {
        
        if(root==NULL) return true;
        
        if(root->data >= mini &&root->data <= maxi)
        {
            bool left = solve(root->left, mini, root->data);
            bool right = solve(root->right, root->data, maxi);
            
            return left&&right;
        }
    return false;
    }
    bool isBST(Node* root) {
        // Aman Yadav;

        int mini = INT_MIN;
        int maxi = INT_MAX;
        bool ans = solve(root, mini, maxi);
        
        return ans;
    }
};