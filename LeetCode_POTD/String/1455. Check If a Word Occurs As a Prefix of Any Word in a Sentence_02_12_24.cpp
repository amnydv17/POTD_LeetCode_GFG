class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream ss(sentence);
        string word;
        int index = 0;
        int m = searchWord.length();
        
        // Iterate through each word in the sentence
        while (ss >> word) {
            index++;
            // Check if the word starts with the searchWord
            if (word.length() >= m && word.substr(0, m) == searchWord) {
                return index;
            }
        }
        
        // If no word is found, return -1
        return -1;
    }
};