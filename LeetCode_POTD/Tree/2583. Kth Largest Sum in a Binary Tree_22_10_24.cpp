class Solution {
    #define ll long long
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<ll,vector<ll>,greater<ll>> minheap;
        queue<TreeNode*> q;
        q.push(root);

        //BFS
        while(!q.empty()){
            ll levelSum=0;
            int size=q.size();
            for(int i=0;i<size;++i){
                TreeNode* curr=q.front();
                q.pop();

                levelSum+=curr->val;
                if(curr->left)  q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            minheap.push(levelSum);
            if(minheap.size()>k)
                minheap.pop();
        }
        if(minheap.size()<k)
            return -1;
        return minheap.top();
    }
};