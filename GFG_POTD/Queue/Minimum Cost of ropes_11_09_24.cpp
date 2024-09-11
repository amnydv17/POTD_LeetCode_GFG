class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Aman Yadav
        long long totalCost = 0;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int i = 0; i < arr.size(); i++) {
            minHeap.push(arr[i]);
        }
        while (minHeap.size() > 1) {
            int first = minHeap.top();
            minHeap.pop();
            int second = minHeap.top();
            minHeap.pop();
            totalCost += first + second;
            minHeap.push(first + second);
        }
        return totalCost;
    }
};
