class Solution {
  public:
    int isValid(string str) {
        // Aman Yadav
        int countDots=0;
        for(int i=0;i<str.size();i++){
            string num="";
            while(i<str.size() && str[i]!='.'){
                num+=str[i];
                i++;
            }
            if(str[i]=='.') countDots++;
            int number=stoi(num);
            if(number>255) return false;
        }
        return countDots==3;
    }
};