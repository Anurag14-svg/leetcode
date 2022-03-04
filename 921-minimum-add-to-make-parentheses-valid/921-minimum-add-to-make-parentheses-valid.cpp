class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        if(n == 0){
            return 0;
        }
        
        stack<char> st;
        for(auto n: s){
            if(n == '(') st.push('(');
            else{
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }
                else st.push(')');
            }
        }
        
        return st.size();
    }
};