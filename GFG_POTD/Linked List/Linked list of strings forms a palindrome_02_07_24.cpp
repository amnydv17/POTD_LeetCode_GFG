class Solution {
  public:
    bool Palin(string str){
        int n=str.length();
        for(int i=0;i<n;i++){
            if(str[i] != str[n-1-i])
            return false;
        }
        return true;
        }
    bool compute(Node* head) {
        // Aman Yadav
        string a="";
        Node* temp=head;
        if(temp==NULL){
            return false;
        }
        while(temp){
            a.append(temp->data);
            temp=temp->next;
        }
        return Palin(a);
        
    }
};