struct Node *insert(struct Node *head, int data) {
    // Aman Yadav
    Node *newNode=new Node(data);
    //case 1 empty LL
    newNode->npx=head;
    //case2 nonempty LL
    if(head){
        head->npx=XOR(newNode,head->npx);
    }
    return newNode;
}

vector<int> getList(struct Node *head) {
    // Aman Yadav
    Node *curr=head,*prev=NULL,*next;
    vector<int>ans;
    while(curr){
        ans.push_back(curr->data);
        next=XOR(prev,curr->npx);
        prev=curr;
        curr=next;
    }
    return ans;
}
