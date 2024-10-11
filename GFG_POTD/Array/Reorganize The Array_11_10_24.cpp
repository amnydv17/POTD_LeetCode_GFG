class Solution {
public:
    vector<int> rearrange(vector<int> arr) {
        // Aman Yadav
        for(int i = 0; i < arr.size(); i++) {
            while(arr[i] != -1 && arr[i] != i) {
                swap(arr[i], arr[arr[i]]);
            }
        }
        return arr;
    }
};