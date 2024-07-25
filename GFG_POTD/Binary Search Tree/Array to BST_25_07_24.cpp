class Solution {
  public:
    Node* solve(vector<int>& nums,int left, int right)
    {
        if(left>right)
        return NULL;
        
        int mid = left + (right-left)/2;
        Node* node = new Node(nums[mid]);
        node->left = solve(nums,left,mid-1);
        node->right = solve(nums,mid+1,right);
    }
    Node* sortedArrayToBST(vector<int>& nums) {
        // Aman Yadav
        Node* root = solve(nums,0, nums.size()-1);
        return root;
    }
};