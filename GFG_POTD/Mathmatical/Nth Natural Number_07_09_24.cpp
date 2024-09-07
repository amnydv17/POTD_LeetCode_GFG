class Solution {
  public:
    long long findNth(long long n) {
        // Aman Yadav
        long long ans=0;
        long long p=1;
        
        while(n>0){
            ans+=p*(n%9);
            n/=9;
            p*=10;
        }
        return ans;
    }
};