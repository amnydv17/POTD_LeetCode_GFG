class Solution {
  public:
    string compareFrac(string str) {

        // Aman Yadav
        int a=0,b=0;
        string temp1="",temp2="";
        double first,second;
        bool indication=false;
        for(char x:str){
            if(x=='/'){
                indication=true;
                temp2+=x;
                continue;
            }
            else if(x==','){
                indication=false;
                first=(double)a/b;
                a=0;
                b=0;
                temp1=temp2;
                temp2="";
                continue;
            }
            else if(x==' ')continue;
            temp2+=x;
            if(!indication){
                a=a*10+(x-'0');
            }
            else{
                b=b*10+(x-'0');
            }
        }
        second=(double)a/b;
        if(first>second)return temp1;
        else if(second>first)return temp2;
        return "equal";
    }
};