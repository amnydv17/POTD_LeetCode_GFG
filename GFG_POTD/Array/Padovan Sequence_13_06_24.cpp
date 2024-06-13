class Solution {
  public:
    int padovanSequence(int n) {
        // Aman Yadav
       if(n<=2)return 1;
       int a=1,b=1,c=1,temp=0,mod=1e9+7;
       for(int i=3;i<=n;i++){
           temp=(a+b)%mod;
           a=b;
           b=c;
           c=temp;
       }
       return c;
    }
};