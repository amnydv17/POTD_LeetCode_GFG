class Solution {
  public:
    int evaluate(vector<string>& arr) {
        // Aman Yadav
        stack<int>st;
        
        for(string &i : arr)
        {
            if(i=="+" || i == "-" || i == "*" || i == "/")
            {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                int result;
                if(i=="+") result = left + right;
                else if(i=="-") result = left - right;
                else if(i=="*") result = left * right;
                else if(i=="/") result = left / right;
                st.push(result);
            }
            else 
            st.push(stoi(i));
        }
    return st.top();
    }
};