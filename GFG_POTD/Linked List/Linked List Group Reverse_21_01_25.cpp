class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // Aman Yadav
        if(head == NULL || head->next == NULL)
        return head;
        
        Node* prev = NULL;
        Node * curr = head, *next = curr->next;
        int count = 0;
        while(curr && count<k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        head->next = reverseKGroup(next, k);
        return prev;
    }
};