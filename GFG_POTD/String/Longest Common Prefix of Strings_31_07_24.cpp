class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // Aman Yadav
        int minlen=1001,count=0;
        string ans;
        // getting smallest string from array
        for(int i=0;i<arr.size();i++){
            int len=arr[i].length();
            if(len<minlen){
                minlen=len;
                ans=arr[i];
            }
        }
        //
        for(int i=0;i<minlen;i++){
            for(int j=0;j<arr.size();j++){
                if(arr[j][i]!=ans[i]){
                    ans=ans.substr(0,count);
                }
                
            }
            count++;
        }
        if(ans.length()==0){
            return "-1";
        }
        return ans;
    }
};