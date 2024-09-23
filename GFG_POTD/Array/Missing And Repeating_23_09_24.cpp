class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // Aman Yadav
        int arraySize = arr.size();
        long long totalSum = ((long long)arraySize * (arraySize + 1)) / 2;
        long long totalSquareSum = (((long long)arraySize * (arraySize + 1) * (2 * arraySize + 1))) / 6;
        long sumArrayElements = 0, sumSquareArrayElements = 0;
        
        for(int i = 0; i < arraySize; i++){
            sumArrayElements += arr[i];
            sumSquareArrayElements += ((long long)arr[i] * arr[i]);
        }
        
        long long difference = totalSum - sumArrayElements;
        long long sumOfNumbers = (totalSquareSum - sumSquareArrayElements) / difference;
        long long missingNumber = (difference + sumOfNumbers) / 2;
        long long repeatingNumber = sumOfNumbers - missingNumber;
        
        return {repeatingNumber, missingNumber};

        
    }
};