class Solution {
public:

    vector<int>ans;

    void postOrder(Node* root)
    {
        if(root == NULL) return;
        for(Node* child: root->children)
            postOrder(child);
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) 
    {
        postOrder(root);
        return ans;
    }
};