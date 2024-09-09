class Solution {
  public:
    void sort012(vector<int>& nums) {
        // Aman Yadav
        int low=0, mid = 0, high = nums.size()-1;
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[low++], nums[mid++]);
                    break;
                    
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
            }
        }
    }
};