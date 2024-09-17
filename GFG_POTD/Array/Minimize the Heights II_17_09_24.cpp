
class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // Aman Yadav
        sort(arr.begin(), arr.end());
        int size = arr.size();
        int maxElement = arr[size - 1];
        int minElement = arr[0];
        int result = maxElement - minElement;
        for (int index = 1; index < size; index++) {
            maxElement = max(arr[size - 1] - k, arr[index - 1] + k);
            minElement = min(arr[0] + k, arr[index] - k);
            if (minElement < 0) continue;
            result = min(result, maxElement - minElement);
        }
        return result;

    }
};

