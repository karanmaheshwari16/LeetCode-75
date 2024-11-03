class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios::sync_with_stdio(false);

        int i=0, j=0;
        int count = 0, ans=0;

        while(j < nums.size()) {
            if(nums[j] == 0) count++;

            if(count > 1) {
                if(nums[i] == 0) count--;
                i++;
            }

            if(count <= 1) {
                ans = max(ans, j-i);
            }
            j++;
        }
        return ans;
    }
};