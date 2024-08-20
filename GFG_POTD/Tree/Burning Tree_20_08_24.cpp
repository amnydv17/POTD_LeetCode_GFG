class Solution {
  public:
    int minTime(Node* root, int target) 
    {
        // Aman Yadav
         unordered_map<Node*, Node*> map;
        preorder(root, nullptr, map);
        
        Node* tar = findTargetNode(root, target);
        
        unordered_set<Node*> vis;
        vis.insert(tar);
        
        queue<Node*> q;
        q.push(tar);
        
        int level = 0;
        
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                Node* pop = q.front();
                q.pop();
                Node* par = map[pop];
                Node* left = pop->left;
                Node* right = pop->right;
                
                if (par != nullptr && vis.find(par) == vis.end()) {
                    vis.insert(par);
                    q.push(par);
                }
                if (left != nullptr && vis.find(left) == vis.end()) {
                    vis.insert(left);
                    q.push(left);
                }
                if (right != nullptr && vis.find(right) == vis.end()) {
                    vis.insert(right);
                    q.push(right);
                }
            }
            ++level;
        }
        return level - 1;
        
    }
private:
    static Node* findTargetNode(Node* node, int x) {
        if (node == nullptr || node->data == x) return node;
        
        Node* left = findTargetNode(node->left, x);
        if (left != nullptr) return left;
        
        return findTargetNode(node->right, x);
    }
    
    static void preorder(Node* node, Node* par, unordered_map<Node*, Node*>& map) {
        if (node == nullptr) return;
        
        map[node] = par;
        
        preorder(node->left, node, map);
        preorder(node->right, node, map);
    }

};