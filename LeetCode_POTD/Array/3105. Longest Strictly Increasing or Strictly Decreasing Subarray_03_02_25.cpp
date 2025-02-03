class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inCount = 1;
        int DeCount = 1;
        int len = 1;
        for(int i=1; i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            {
                inCount++;
                DeCount = 1;

                len = max(inCount, len);
            }
            else if(nums[i] < nums[i-1])
            {
                DeCount++;
                inCount = 1;

                len = max(len, DeCount);
            }
            else{
                inCount = 1;
                DeCount = 1;
            }
        
        }
    return len;
    }
};