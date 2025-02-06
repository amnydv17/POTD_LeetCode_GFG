class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>mp;
        int tuple = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n;j++)
            {
                mp[nums[i]*nums[j]]++;
            }
        }

        for(auto &i : mp)
        {
            int prod = i.first;
            int freq = i.second;

            tuple += (freq*(freq-1))/2;
        }
    return tuple*8;
    }
};