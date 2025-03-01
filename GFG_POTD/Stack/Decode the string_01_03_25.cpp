class Solution {
  public:
    string decodedString(string &s) {
        // Aman Yadav
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != ']') st.push(s[i]);
            else{
                string text;
                while(!st.empty() && st.top() != '[')
                {
                    text.push_back(st.top());
                    st.pop();
                }
                reverse(text.begin(), text.end());
                st.pop();
                string k;
                while(!st.empty() && isdigit(st.top()))
                {
                    k.push_back(st.top());
                    st.pop();
                }
                reverse(k.begin(), k.end());
                int num = stoi(k);
                string repeat;
                for(int j=0; j<num; j++)
                {
                    repeat.append(text);
                }
                for(char c: repeat) st.push(c);
            }
        }
        
        string result;
        while(!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        
        return result;
    }
};
