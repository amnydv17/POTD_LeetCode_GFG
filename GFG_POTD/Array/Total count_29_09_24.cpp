class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // Aman Yadav
        int count=0;
        for(int i=0;i<arr.size();i++){
            count += arr[i]/k;
            
            if(arr[i]%k!=0)
            count++;
        }
        return count;
    }
};