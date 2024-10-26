class Solution {
  public:
    int count(struct Node* head, int key) {
        // Aman Yadav
        Node* temp=head;
        int count=0;
        while(temp){
            if(temp->data==key) count++;
            temp=temp->next;
        }
        return count;
    }
};