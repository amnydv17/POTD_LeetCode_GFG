class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* node) {
        // Aman yadav
        if(node==nullptr)
        return -1;
        
        return max(height(node->left), height(node->right))+1;
    }
};