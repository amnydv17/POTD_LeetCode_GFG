class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Aman Yadav
        if(p.length() > s.length()) return "-1";
        
        int sourceLength = s.length();
        int patternLength = p.length();
        int windowStart = -1;
        int windowEnd = -1;
        int minLength = INT_MAX;
        int uniquePatternChars = 0;
        int matchedPatternChars = 0;
        int left = 0;
        
        vector<int> freqSource(26, 0), freqPattern(26, 0);
        
        for(int i = 0; i < patternLength; i++) {
            freqPattern[p[i] - 'a']++;
            if(freqPattern[p[i] - 'a'] == 1) uniquePatternChars++;
        }
        
        for(int i = 0; i < sourceLength; i++) {
            freqSource[s[i] - 'a']++;
            if(freqSource[s[i] - 'a'] == freqPattern[s[i] - 'a']) matchedPatternChars++;
        
            if(matchedPatternChars == uniquePatternChars) {
                while(freqSource[s[left] - 'a'] > freqPattern[s[left] - 'a']) {
                    freqSource[s[left++] - 'a']--;
                }
                if(minLength > i - left + 1) {
                    windowStart = left;
                    windowEnd = i;
                    minLength = i - left + 1;
                }
            }
        }
        
        if(windowStart == -1) return "-1";
        return s.substr(windowStart, minLength);

    }
};