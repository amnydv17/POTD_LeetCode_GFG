class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        
        int j=12;
        int count=0;
        
        for(int i=0;i<n;i++)
        {
            string s = details[i];
            string s1 = s.substr(11,2);
            int age = stoi(s1);
            if(age>60)
                count++;
        }
    return count;
    }
};