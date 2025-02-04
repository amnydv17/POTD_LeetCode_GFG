int height(Node* root, int& ans)
{
    if(root == NULL)
    return 0;
    
    int leftH = height(root->left,ans);
    int rightH = height(root->right, ans);
    
    ans = max(ans, leftH+rightH);
    return max(leftH, rightH) + 1;
}

class Solution {
  public:
    int diameter(Node* root) {
        // Aman Yadav
        int ans=0;
        
        height(root, ans);
        
        return ans;
    }
};