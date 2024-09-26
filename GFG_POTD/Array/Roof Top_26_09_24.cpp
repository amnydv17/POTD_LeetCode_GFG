class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        // Aman Yadav
        int currentStreak = 0, longestStreak = 0;

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] > arr[i - 1]) {
                currentStreak++;
                longestStreak = max(longestStreak, currentStreak);
            } else {
                currentStreak = 0;
            }
        }
        
        return longestStreak;
    }
};