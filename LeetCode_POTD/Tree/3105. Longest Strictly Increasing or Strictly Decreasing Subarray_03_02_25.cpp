class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inCount = 1;
        int DeCount = 1;
        int len = 1;
        for(int i=0; i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            {
                inCount++;
                DeCount = 1;

                len = max(inCount, DeCount);
            }
            else if(nums[i] < nums[i+1])
            {
                DeCount++;
                inCount = 1;

                len = max(inCount, DeCount);
            }
            else{
                inCount = 1;
                DeCount = 1;
            }
        
        }
    return len;
    }
};