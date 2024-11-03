class Solution {
public:
    int maxVowels(string s, int k) {
        ios::sync_with_stdio(false);

        set<char> st = {'a', 'e', 'i', 'o', 'u'};

        int i=0, j=k-1;
        int count =0;
        for(int p=0 ; p<k ; p++) {
            if(st.find(s[p]) != st.end()) count++;
        }
        int ans = count;

        while(j < s.size()) {
            if(st.find(s[i]) != st.end()) count--;
            j++;
            if(st.find(s[j]) != st.end()) count++;
            i++;

            ans = max(count, ans);
        }
        return ans;
    }
};