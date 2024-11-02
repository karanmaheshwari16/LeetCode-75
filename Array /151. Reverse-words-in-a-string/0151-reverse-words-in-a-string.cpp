class Solution {
public:
    string reverseWords(string s) {
        stringstream s1(s);
        string word;
        stack<string> st;

        while(s1 >> word) st.push(word);

        s="";
        while(!st.empty()) {
            s += st.top();
            st.pop();
            if(!st.empty()) s += " ";
        }
        return s;
    }
};