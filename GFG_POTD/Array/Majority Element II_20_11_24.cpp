class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Aman Yadav
               int n=arr.size();
        int c1=0,c2=0,e1=-1,e2=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==e1){
                c1++;
            }else if(arr[i]==e2){
                c2++;
            }else if(c1==0){
                e1=arr[i];
                c1=1;
            }else if(c2==0){
                e2=arr[i];
                c2=1;
            }else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i:arr){
            if(i==e1) c1++;
            else if(i==e2) c2++;
        }
        vector<int> result;
        if (c1 > n / 3) result.push_back(e1);
        if (c2 > n / 3) result.push_back(e2);
    
        if (result.size() == 2 && result[0] > result[1]) swap(result[0], result[1]);
    
        return result;
    }
};