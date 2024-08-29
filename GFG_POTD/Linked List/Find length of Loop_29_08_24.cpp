class Solution {
  public:
  int loopLength(Node* slow, Node* fast)
  {
      int count =1;
      slow = slow->next;
      while(slow!=fast)
      {
        count++;
        slow = slow->next;
      }
     return count;
  }
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Aman Yadav
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next -> next;
            if(slow==fast)
            {
                return loopLength(slow,fast);
            }
        }
    return 0;
    }
};