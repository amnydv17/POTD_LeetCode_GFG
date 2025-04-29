class Solution {
  public:
    Node* segregate(Node* head) {
        // Aman Yadav
        
            Node* zeroD = new Node(0);
    Node* oneD = new Node(0);
    Node* twoD = new Node(0);

    // Current tails of the three lists
    Node* zero = zeroD;
    Node* one = oneD;
    Node* two = twoD;

    // Traverse original list and separate nodes
    Node* curr = head;
    while (curr != NULL) {
        if (curr->data == 0) {
            zero->next = curr;
            zero = zero->next;
        } else if (curr->data == 1) {
            one->next = curr;
            one = one->next;
        } else {
            two->next = curr;
            two = two->next;
        }
        curr = curr->next;
    }

    // Connect the three lists
    zero->next = (oneD->next) ? oneD->next : twoD->next;
    one->next = twoD->next;
    two->next = NULL;

    // Head of the sorted list
    Node* sortedHead = zeroD->next;

    // Clean up dummy nodes
    delete zeroD;
    delete oneD;
    delete twoD;

    return sortedHead;
    }
};
