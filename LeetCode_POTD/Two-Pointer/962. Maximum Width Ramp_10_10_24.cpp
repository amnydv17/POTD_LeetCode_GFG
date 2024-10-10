class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        // Brute Force
        // int ramp = 0;
        // for(int i=0; i<n; i++)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //         if(nums[i]<=nums[j])
        //         {
        //             ramp = max(ramp, j-i);
        //         }
        //     }
        // }
        // return ramp;

        // 2nd Approach
        // int ramp = 0;
        // for(int i=0; i<n; i++)
        // {
        //     for(int j=n-1; j>i; j--)
        //     {
        //         if(nums[i]<=nums[j])
        //         {
        //             ramp = max(ramp, j-i);
        //             break;
        //         }
        //     }
        // }
        // return ramp;

        // Optimal Approach
        vector<int>rightMax(n);
        rightMax[n-1] = nums[n-1];
        for(int i=n-2; i>=0; i--)
        {
            rightMax[i] = max(rightMax[i+1], nums[i]);
        }
        int ramp = 0;
        int i =0; 
        int j = 0;

        while(j < n)
        {
            while(i<j && nums[i] > rightMax[j] )
            {
                i++;
            }

            ramp = max(ramp, j-i);
            j++;
        }
    return ramp;
    }
};