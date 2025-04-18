class Solution {
  public:
    void  inorder(Node* root,  vector<int> &ans)
    {
        if(root==NULL)
        return;
        
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Aman Yadav
        vector<int>ans;
        inorder(root, ans);
        return ans;
    }
};