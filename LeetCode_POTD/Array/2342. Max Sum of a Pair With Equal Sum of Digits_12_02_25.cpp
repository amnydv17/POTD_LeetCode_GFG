class Solution {
  public:
      int getDigitSum(int num)
      {
          int sum=0;
          while(num>0)
          {
              sum += (num%10);
              num /=10;
          }
      return sum;
      }
      int maximumSum(vector<int>& nums) {
          int n = nums.size();
          int maxSum = -1;
  
          // for(int i=0; i<n;i++)
          // {   
          //     int digitSumi = getDigitSum(nums[i]);
          //     for(int j=i+1; j<n;j++)
          //     {
          //         int digitSumj = getDigitSum(nums[j]);
  
          //         if(digitSumi==digitSumj)
          //         {
          //             maxSum = max(maxSum, nums[i]+nums[j]);
          //         }
          //     }
          // }
  
  
  
          // // Approach-2
          // unordered_map<int,int>mp;
          // for(int i=0; i<n;i++)
          // {   
          //     int digitSumi = getDigitSum(nums[i]);
          //     if(mp.count(digitSumi))
          //     {
          //         maxSum = max(maxSum, nums[i]+mp[digitSumi]);
          //     }
  
          //     mp[digitSumi] = max(mp[digitSumi], nums[i]);
          // }
  
  
  
          // Approach-3
          int arr[82];  // 999999999=81
          for(int i=0; i<n;i++)
          {   
              int digitSumi = getDigitSum(nums[i]);
              if(arr[digitSumi]>0)
              {
                  maxSum = max(maxSum, nums[i]+arr[digitSumi]);
              }
  
              arr[digitSumi] = max(arr[digitSumi], nums[i]);
          }
      return maxSum;
      }
  };