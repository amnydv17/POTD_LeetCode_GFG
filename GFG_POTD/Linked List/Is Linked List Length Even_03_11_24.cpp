class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Aman Yadav
        bool flag=true;
        struct Node *temp = *head;
        while(temp!=nullptr){
            flag=!flag;
            temp = temp->next;
        }
        return flag;
    }
};