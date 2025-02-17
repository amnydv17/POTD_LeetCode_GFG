// Using Min-Heap
// class Solution {
//   public:
//     vector<int> kLargest(vector<int>& arr, int k) {
//         // Aman Yadav
//         priority_queue<int,vector<int>, greater<int>>pq;
        
//         for(int i=0; i<arr.size(); i++)
//         {
//             pq.push(arr[i]);
//             if(pq.size()>k) pq.pop();
//         }
//         vector<int>ans(k);
//         for(int i=k-1; i>=0; i--)
//         {
//             ans[i] = pq.top();
//             pq.pop();
//         }
//     return ans;
//     }
// };



// Using max Heap
class Solution {
    public:
        vector<int> kLargest(vector<int>& arr, int k) {
            // Create a max heap
            priority_queue<int> maxHeap;
            
            // Push all elements into the max heap
            for (int num : arr) {
                maxHeap.push(num);
            }
            
            // Create a result vector
            vector<int> result(k);
            
            // Pop k elements from the max heap and store them in the result vector
            for (int i = 0; i < k; i++) {
                result[i] = maxHeap.top();
                maxHeap.pop();
            }
            
            return result;
        }
    };