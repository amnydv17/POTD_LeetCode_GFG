class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // Aman Yadav
        long long number1 = 0, number2 = 0;
        int modulus = 1000000007;
        Node *currentNode = first;
        
        while(currentNode) {
            number1 = (number1 * 10 + (currentNode->data)) % modulus;
            currentNode = currentNode->next;
        }
        
        currentNode = second;
        while(currentNode) {
            number2 = (number2 * 10 + (currentNode->data)) % modulus;
            currentNode = currentNode->next;
        }
        
        return (number1 * number2) % modulus;

    }
};