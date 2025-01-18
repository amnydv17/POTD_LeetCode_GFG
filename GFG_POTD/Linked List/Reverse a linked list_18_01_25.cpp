class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // Aman Yadav
        vector<int>v;
        Node* temp = head;
        while(temp != NULL)
        {
            v.push_back(temp->data);
            temp = temp->next;
        }
        
        temp = head;
        for(int i=v.size()-1; i>=0;i--)
        {
            temp->data = v[i];
            temp = temp->next;
        }
        return head;
    }
};