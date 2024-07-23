class Solution {
  public:
    void help(Node *root,int &mn,int &mx,int pos){
        if(!root)return;
        mn=min(mn,pos);
        mx=max(mx,pos);
        help(root->left,mn,mx,pos-1);
        help(root->right,mn,mx,pos+1);
    }
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        // Aman Yadav
        if(!root)return 0;
        int mn=0,mx=0;
        help(root,mn,mx,0);
        return mx+abs(mn)+1;
    }
};