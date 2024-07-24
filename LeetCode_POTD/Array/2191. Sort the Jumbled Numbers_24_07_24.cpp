class Solution {
public:
    int getMappedNum(int num, vector<int>&mapping)
    {
        if(num<10)
        {
            return mapping[num];
        }
        int mappedNum = 0;
        int placeValue = 1;
        
        while(num)
        {
            int digit = num%10;
            int mappedDigit = mapping[digit];

            mappedNum += (mappedDigit * placeValue);

            placeValue *= 10;
            num /= 10;
        }
    return mappedNum;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();
        
        vector<pair<int, int>>vec;  // {mappedNum, index}
        
        for(int i=0; i<n; i++)
        {
            int mappedNum = getMappedNum(nums[i], mapping);
            
            vec.push_back({mappedNum, i});
        }
        
        sort(begin(vec), end(vec));
        vector<int>result;
        
        for(auto &p: vec)
        {
            int orignalNumIndex = p.second;
            result.push_back(nums[orignalNumIndex]);
        }
    return result;
    }
};