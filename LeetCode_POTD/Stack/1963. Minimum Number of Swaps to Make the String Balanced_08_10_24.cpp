class Solution {
public:
    int minSwaps(string s) {
        // stack<char>st;
        int size = 0;

        for(auto &ch : s)
        {
            if(ch == '[')
            {
                // st.push(ch);
                size++;
            }
            // else if(!st.empty())
            else if(size > 0)
            {
                // st.pop(); // balancing close bracket ] with an open bracket into stack
                size--;
            }
        }
        // size of stack == no of open bracket
        // return ((st.size() +1)/2);
        return (size+1)/2; 

    }
};