class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // Aman Yadav
        vector<string>ans;
        string word = "";
        for(int i=0;i<str.size();i++)
        {
            if(str[i] != '.') word += str[i];
            else{
                ans.push_back(word);
                word = "";
            }
        }
        ans.push_back(word);
        
        string result = "";
        for(int i=ans.size()-1;i>=0;i--){
            result += ans[i];
            if(i!=0) result += ".";
        }
    return result;
    }
};