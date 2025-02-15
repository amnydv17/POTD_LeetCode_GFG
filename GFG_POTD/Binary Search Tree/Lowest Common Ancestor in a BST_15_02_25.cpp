class Solution {
  public:
    Node* LCA(Node* root, Node* n1, Node* n2) {
        // Aman Yadav
        if(root == NULL) return root;
        if(root->data < n1->data && root->data < n2->data)
            LCA(root->right, n1, n2);
        else if(root->data > n1->data && root->data > n2->data)
            LCA(root->left, n1, n2);
        
        else return root;
    }
};