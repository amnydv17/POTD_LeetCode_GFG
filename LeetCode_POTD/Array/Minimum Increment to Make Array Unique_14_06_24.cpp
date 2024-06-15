class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
     sort(nums.begin(),nums.end());
        long long int ans=0;
        for(int i=1;i<N;i++){
            if(nums[i]<=nums[i-1]){
                ans+=nums[i-1]-nums[i]+1;
                nums[i]=nums[i-1]+1;
            }
        }
        return ans;   
    }
};