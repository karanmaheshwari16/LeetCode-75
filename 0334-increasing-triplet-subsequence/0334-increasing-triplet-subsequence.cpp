class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        ios::sync_with_stdio(false);
        int first = INT_MAX;
        int second = INT_MAX;

        for(auto x : nums) {
            if(x <= first) first = x;
            else if(x <= second) second = x;
            else return true;
        }
        return false;
    }
};