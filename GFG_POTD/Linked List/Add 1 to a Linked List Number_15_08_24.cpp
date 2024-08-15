class Solution {
  public:
    Node* reverse(Node* head){
        Node *prev=NULL, *curr=head,*next = NULL;
        while(curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
    return prev;
    }
    Node* addOne(Node* head) {
        // Aman Yadav
        // return head of list after adding one
        head = reverse(head);
        int carry=1;
        Node* temp=head;
        Node* tail=NULL;
        while(temp && carry){
            if(temp->data==9) temp->data=0;
            else{
                temp->data=temp->data+1;
                carry=0;
            }
            tail=temp;
            temp=temp->next;
        }
        if(carry) tail->next=new Node(1);
        head=reverse(head);
        return head;
    }
};