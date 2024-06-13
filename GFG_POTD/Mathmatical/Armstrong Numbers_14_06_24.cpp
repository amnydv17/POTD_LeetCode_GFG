class Solution {
  public:
    string armstrongNumber(int n){
        // Aman Yadav
        int originalNum = n;
        int sum = 0;
    
        while (n > 0) {
            int digit = n % 10;
            sum += pow(digit, 3);
            n /= 10;
        }
    
        if(sum == originalNum)
         return "Yes";
        else
         return "No";
    }
};