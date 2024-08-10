class Solution {
  public:
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
        // Aman Yadav
        if(!head) return NULL;
        
        Node *temp=head;
        while(temp->next){
            temp=temp->next;
        }
        temp->next=head;
        while(--k)
        head=head->next;
        
        Node *newHead=head->next;
        head->next=NULL;
        
        return newHead;
    }
};
