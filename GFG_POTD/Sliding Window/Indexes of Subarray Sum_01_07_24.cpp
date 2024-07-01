class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Aman Yadav
        vector<int>ans;
        int st=0;
        int end=0;
        int sum=0;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum>=s)
            {
                end=i;
            while(s<sum && st<end)
            {
                sum=sum-arr[st];
                st++;
            }
            }
            if(sum==s)
            {
                ans.push_back(st+1);
                ans.push_back(end+1);
                found=true;
                break;
            }
        }
        if(!found)
         ans.push_back(-1);
        
        return ans;
    }
};