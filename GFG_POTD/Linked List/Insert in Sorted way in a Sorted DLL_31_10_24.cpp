class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Aman Yadav
        vector<int> v;
        bool inserted = false;
        
        // Traverse the list and insert `x` in the sorted position in vector `v`
        Node* curr = head;
        while (curr) {
            if (!inserted && curr->data >= x) {
                v.push_back(x);
                inserted = true;
            }
            v.push_back(curr->data);
            curr = curr->next;
        }
        
        // If `x` is the largest, it wasn't inserted in the loop
        if (!inserted) {
            v.push_back(x);
        }
        
        // Reconstruct the doubly linked list
        Node* ans = new Node();
        ans->data = v[0];
        ans->prev = nullptr;
        Node* temp = ans;

        for (int i = 1; i < v.size(); i++) {
            Node* newNode = new Node();
            newNode->data = v[i];
            newNode->prev = temp;
            temp->next = newNode;
            temp = newNode;
        }
        
        temp->next = nullptr;  // Last node's next should be null
        return ans;
    }
};