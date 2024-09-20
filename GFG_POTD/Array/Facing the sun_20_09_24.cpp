class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        // Aman Yadav
        int count = 1;
        int maxi = height[0];
        for(int i=0; i<height.size(); i++)
        {
            if(height[i]>maxi){
                count++;
                maxi = height[i];
            }
        }
    return count;
    }
};