class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        for(auto x : s) {
            if(!st.empty() and x=='*') st.pop();
            else st.push(x);
        }
        
        s="";
        while(!st.empty()) {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());

        return s;
    }
};