class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Aman Yadav
        int low=0,high=n-1,mid=0,mn=INT_MAX,ans=-1;
        while(low<=high){
            mid=(low+high)/2;
            int diff = abs(arr[mid]-k);
            ans = diff<=mn?(diff==mn?ans=max(arr[mid],ans):ans=arr[mid]):ans;
            mn=min(mn,diff);
            if(arr[mid]<=k)low=mid+1;
            else high=mid-1;
        }
        return ans;
    } 
};