class Solution {
public:
    int getLucky(string s, int k) {
        string sb;
        
        // Convert each character to its corresponding number
        for(char ch : s) {
            sb += to_string(ch - 'a' + 1);
        }
        
        // Perform the sum transformation k times
        while(k > 0) {
            int sum = 0;
            for(char ch : sb) {
                sum += (ch - '0');
            }
            k--;
            sb = to_string(sum);
        }
        
        return stoi(sb);
    }
};