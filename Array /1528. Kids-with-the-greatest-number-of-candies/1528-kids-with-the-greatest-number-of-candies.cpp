class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

        int ele = *max_element(candies.begin() , candies.end());

        vector<bool> v;
        for(int i=0 ; i<candies.size() ; i++) {
            if(candies[i] + extraCandies >= ele) {
                v.push_back(true);
            }
            else v.push_back(false);
        }

        return v;
    }
};
