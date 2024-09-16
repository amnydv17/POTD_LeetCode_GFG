
class Solution {
  public:
    int maxLength(string& str) {
        // Aman Yadav
        int maxLength = 0, openCount = 0, closeCount = 0, maxLength2 = 0;
        for(int i = 0; i < str.length(); i++) {
            if(str[i] == '(') openCount++;
            else closeCount++;
            if(closeCount > openCount) closeCount = openCount = 0;
            else if(closeCount == openCount) maxLength = max(maxLength, openCount * 2);
        }

        openCount = closeCount = 0;

        for(int i = str.length() - 1; i >= 0; i--) {
            if(str[i] == '(') openCount++;
            else closeCount++;
            if(openCount > closeCount) openCount = closeCount = 0;
            else if(openCount == closeCount) maxLength2 = max(maxLength2, openCount * 2);
        }
        
        return max(maxLength, maxLength2);

    }
};