// Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/
// Solved: 2026-03-16
//
class Solution {
public:
    int evalRPN(vector<string>& s) {
         stack<int>st;
    for(auto token : s){

        if(token == "+" || token == "-" ||  token == "/" || token == "*"){
          int a = st.top();
          st.pop();
          int b = st.top();
          st.pop();
          if(token == "+") st.push(b+a);
          else if(token == "-") st.push(b-a);
          else if(token == "*") st.push(b*a);
          else st.push(b/a);
        } else {
            st.push(stoi(token));
        }
    }
    return st.top();

    }
};