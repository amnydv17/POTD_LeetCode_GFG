class Solution {
  public:
    int swapNibbles(int n) {
        // Aman Yadav
        int rn=n &  (0b11110000);
        int ln=n & (0b00001111);
        
        rn=rn>>4;
        ln=ln<<4;
        
        return rn | ln;
    }
};