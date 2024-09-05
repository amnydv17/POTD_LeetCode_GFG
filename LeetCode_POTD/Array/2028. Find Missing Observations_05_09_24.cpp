class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
    int m = rolls.size();
    int sum = mean * (n + m);
    
    // Subtract rolls[i] from sum
    for (int i = 0; i < m; ++i) {
        sum -= rolls[i];
    }

    // Check if the sum is out of the valid range
    if (sum < n || sum > 6 * n) {
        return {};
    }

    // Calculate average and remainder
    int avg = sum / n;
    int rem = sum % n;

    vector<int> res(n, avg);

    // Distribute the remainder
    for (int i = 0; i < n && rem > 0; ++i) {
        res[i]++;
        rem--;
    }

    return res;
    }
};