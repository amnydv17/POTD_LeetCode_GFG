class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;
        
        // Combine the two strings and split them by spaces
        istringstream stream(s1 + " " + s2);
        string word;
        
        // N + M
        while (stream >> word) {
            wordCount[word]++;
        }
        
        vector<string> result;
        
        // n + m
        for (const auto& entry : wordCount) {
            if (entry.second == 1) {
                result.push_back(entry.first);
            }
        }
        
        return result;
    }
};
