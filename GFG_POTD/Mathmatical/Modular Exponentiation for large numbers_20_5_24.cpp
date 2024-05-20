class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Aman Yadav
		    long ans = 1;
		    while(n>0)
		    {
		        if(n%2 == 1)
		            ans = (ans*x)%M;
		            x = (x*x)%M;
		            n = n/2;
		    }
		    return ans;
		}
};