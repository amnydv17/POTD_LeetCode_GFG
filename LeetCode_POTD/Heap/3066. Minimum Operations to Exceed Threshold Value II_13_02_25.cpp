class Solution {
  public:
      int minOperations(vector<int>& nums, int k) {
          priority_queue<long, vector<long>, greater<long>>pq(begin(nums), end(nums)); // Auto Call Heapify--> logn
  
          // for(auto &num : nums)
          // {
          //     pq.push(num);    it take nlogn time because logn for heapify and n for push n element
          // }
  
  
          int count = 0;
          while(!pq.empty() && pq.top() < k)
          {
              long smallest = pq.top();  // min in both two
              pq.pop();
  
              long secondSmall = pq.top(); // max in both two
              pq.pop();
  
              pq.push(smallest * 2 + secondSmall);
              count++;
          }
      return count;
      }
  };