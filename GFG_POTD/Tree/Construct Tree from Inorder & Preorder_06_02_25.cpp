class Solution {
  public:
    //Map me Value - > index store karna for inorder ka
    unordered_map<int,int>mp;
    Node* solve(vector<int> &preorder, int s, int e, int &preIndex)
    {
        // base case
        if(preIndex>=preorder.size() || s > e) return NULL;
        
        // root find out karna
        int val = preorder[preIndex++];
        int pos = mp[val];
        // root node create karna
        Node* root = new Node(val);
        
        root->left = solve(preorder, s, pos-1, preIndex);
        root->right = solve(preorder, pos+1, e, preIndex);
        
        return root;
    }
    // Function to build the tree from given inorder and preorder traversals
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // Aman Yadav
        for(int i=0; i<inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        
        int preIndex = 0;
        
        return solve(preorder, 0, inorder.size()-1, preIndex);
    }
};