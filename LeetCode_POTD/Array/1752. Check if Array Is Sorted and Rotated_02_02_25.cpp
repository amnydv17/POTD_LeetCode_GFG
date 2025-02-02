class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();

        int turn = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i+1)%n]) {
                turn++;
            }
        }

        return turn <= 1;
    }
};