class Solution {
  public:
    Node *head = NULL, *lastNode = NULL;
    void solve(Node *root){
        if(!root)return;
        
        solve(root->left);
        
        if(!head)head=root;
        if(lastNode)lastNode->right=root;
        root->left=lastNode;
        
        lastNode=root;
        solve(root->right);
    }
    Node* bToDLL(Node* root) {
        // Aman Yadav
        solve(root);
        return head;
    }
};