class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i =0;
        int ans=0;
        int index=0;

        while(i < n) {
            int len = 1;
            while(i+len<n and chars[i] == chars[i+len]){
                len++;
            }

            chars[index++] = chars[i];
            // ans += index;
            if(len > 1) {
                string s = to_string(len);
                for(auto x : s) {
                    chars[index++] = x;
                    // ans += index;
                }
            }
            i += len;
        }
        return index;
    }
};