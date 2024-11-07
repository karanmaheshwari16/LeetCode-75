class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long count = 0;
        unordered_map<int, int> m;
        int n = hours.size();
        for(int hrs : hours) {
            int remainder = (24 - hrs % 24) % 24;

            if(m.find(remainder) != m.end()) count += m[remainder];

            m[hrs % 24]++;
        }

        return count;
    }
};