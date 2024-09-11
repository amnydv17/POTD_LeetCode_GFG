class Solution {
public:
    int minBitFlips(int start, int goal) {
        int difference = start ^ goal;
        int bitCount = 0;
        while (difference > 0) { // counting set bits
            difference = difference & (difference - 1);
            bitCount++;
        }
    return bitCount;

    }
};