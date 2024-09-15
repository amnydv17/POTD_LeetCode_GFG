class Solution {
public:
    int findTheLongestSubstring(string s) {
        // Map to store the first occurrence of a state of vowel parities
        unordered_map<string, int> mp;
        
        // Initialize an array to track the parity of each vowel
        vector<int> state(5, 0); // [a, e, i, o, u] initialized to 0 (even count)

        string currentState = "00000";  // Start with all vowels having an even count
        mp[currentState] = -1;
        
        int maxLength = 0;
        
        for (int i = 0; i < s.length(); ++i) {
            // Update state based on the vowel encountered
            if (s[i] == 'a') state[0] ^= 1;  // Flip between even/odd for 'a'
            else if (s[i] == 'e') state[1] ^= 1; // Flip for 'e'
            else if (s[i] == 'i') state[2] ^= 1; // Flip for 'i'
            else if (s[i] == 'o') state[3] ^= 1; // Flip for 'o'
            else if (s[i] == 'u') state[4] ^= 1; // Flip for 'u'

            // Create a string representation of the current state
            currentState = "";
            for (int j = 0; j < 5; ++j) {
                currentState += to_string(state[j]);
            }

            // Check if we've seen this state before
            if (mp.find(currentState) != mp.end()) {
                // Calculate the length of the substring
                maxLength = max(maxLength, i - mp[currentState]);
            } else {
                // Store the first occurrence of this state
                mp[currentState] = i;
            }
        }

        return maxLength;
    }
};