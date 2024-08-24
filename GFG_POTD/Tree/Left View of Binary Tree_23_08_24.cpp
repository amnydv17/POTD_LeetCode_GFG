void solve(Node *root,   vector<int>&ans, int level)
{
    if(!root) return;
    
    if(ans.size()==level)
    ans.push_back(root->data);
    
    solve(root->left,ans,level+1);
    solve(root->right,ans,level+1);
}
vector<int> leftView(Node *root)
{
   // Aman Yadav
   vector<int>ans;
   solve(root,ans,0);
   return ans;
   
}