class Solution {
  public:
    int lps(string str) {
        // Aman Yadav
        int length = str.length();
        int startIndex = 0, nextIndex = 1, position = 1, count = 0;

        while (startIndex < length && nextIndex < length) {
            if (str[startIndex] == str[nextIndex]) {
                startIndex++;
                nextIndex++;
                count++;
            } else {
                startIndex = 0;
                position++;
                nextIndex = position;
                count = 0;
            }
        }
        
        return count;

    }
};