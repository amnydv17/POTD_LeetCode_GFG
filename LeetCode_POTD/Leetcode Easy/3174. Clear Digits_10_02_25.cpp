class Solution {
  public:
      string clearDigits(string s) {
      //    int i = 0;
  
      //     while (i < s.size()) {
      //         if (isdigit(s[i])) {
  
      //             s.erase(i, 1);
      //             if (i > 0) {
      //                 s.erase(i - 1, 1);
      //                 i--;
      //             }
      //         } else {
      //             i++;
      //         }
      //     }
      //     return s; 
      
  
  
      // stack<char> st;
  
      //     for(char &ch : s) {
      //         if(ch >= 'a' && ch <= 'z') {
      //             st.push(ch);
      //         } else if(!st.empty()) {
      //             st.pop();
      //         }
      //     }
  
      //     string result = "";
      //     while(!st.empty()) {
      //         result.push_back(st.top());
      //         st.pop();
      //     }
  
      //     reverse(begin(result), end(result));
  
      //     return result;
  
  
  
       string result = "";
  
          for(char &ch : s) {
              if(ch >= 'a' && ch <= 'z') {
                  result.push_back(ch);
              } else if(!result.empty()) {
                  result.pop_back();
              }
          }
  
          return result;
  
      }
  };