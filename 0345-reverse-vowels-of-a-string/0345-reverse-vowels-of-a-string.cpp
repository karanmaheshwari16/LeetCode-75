class Solution {
public:
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        set<char> set1 = {'a','e','i','o','u','A','E','I','O','U'};
        while(i<j) {
            if(set1.count(s[i]) and set1.count(s[j])) {
                swap(s[i], s[j]);
                i++; j--;
            }  
            else if(set1.count(s[i]) and !set1.count(s[j])) {
                j--;
            }  
            else i++;
        }
        return s;
    }
};