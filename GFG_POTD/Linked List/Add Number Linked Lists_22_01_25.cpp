class Solution {
  public:
    Node* reverseList(Node* num)
    {
        if(num == NULL || num->next == NULL)
        return num;
        
        Node* curr = num;
        Node* prev = NULL;
        
        while(curr)
        {
            Node* forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
    return prev;
    }
    
    Node* addTwoLists(Node* num1, Node* num2) {
        // Aman Yadav
        num1 = reverseList(num1);
        num2 = reverseList(num2);
        
        Node*ans = new Node(0);
        int carry = 0;
        Node* first = ans;
        while(num1 || num2 || carry )
        {
            int sum = carry;
            if(num1)
            {
                sum += num1->data;
                num1 = num1->next;
            }
            if(num2)
            {
                sum += num2->data;
                num2 = num2->next;
            }
            ans->data = (sum%10);
            carry = sum/10;
            if(num1 || num2 || carry)
            {
                ans->next = new Node(0);
                ans = ans->next;
            }
        }
        reverseList(first);
        while(ans->data == 0) ans = ans->next;
        return ans;
    }
};