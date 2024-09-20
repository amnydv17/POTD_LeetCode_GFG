class Solution {
private:
    void appendAtTail(Node* &newHead, Node* &newTail, int value) {
        Node* freshNode = new Node(value);
        if(newHead == NULL) {
            newHead = freshNode;
            newTail = freshNode;
        } else {
            newTail->next = freshNode;
            newTail = freshNode;
        }
    }

public:
    Node *copyList(Node *originalHead) {  // Renamed to copyList
        // Step 1: Create a Clone List
        Node* clonedHead = NULL;
        Node* clonedTail = NULL;

        Node* current = originalHead;
        while(current != NULL) {
            appendAtTail(clonedHead, clonedTail, current->data);
            current = current->next;
        }

        // Step 2: Insert nodes of Clone List in between original List
        Node* originalNode = originalHead;
        Node* clonedNode = clonedHead;

        while(originalNode != NULL && clonedNode != NULL) {
            Node* nextOriginal = originalNode->next;
            originalNode->next = clonedNode;
            originalNode = nextOriginal;

            Node* nextCloned = clonedNode->next;
            clonedNode->next = originalNode;
            clonedNode = nextCloned;
        }

        // Step 3: Random pointer copy
        originalNode = originalHead;
        clonedNode = clonedHead;

        while(originalNode != NULL && clonedNode != NULL) {
            if(originalNode->random != NULL) {
                clonedNode->random = originalNode->random->next;
            } else {
                clonedNode->random = NULL;
            }

            clonedNode = clonedNode->next;
            originalNode = originalNode->next;
        }

        // Step 4: Revert step 2 changes
        Node* originalTemp = originalHead;
        Node* clonedTemp = clonedHead;

        while (originalTemp != NULL && clonedTemp != NULL) {
            originalTemp->next = originalTemp->next ? originalTemp->next->next : originalTemp->next;
            clonedTemp->next = clonedTemp->next ? clonedTemp->next->next : clonedTemp->next;

            originalTemp = originalTemp->next;
            clonedTemp = clonedTemp->next;
        }

        // Step 5: Return the cloned list
        return clonedHead;
    }
};
