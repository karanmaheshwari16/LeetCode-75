class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN, sum=0;

        for(int i=0 ; i<n ; i++ ) {
            sum = max(nums[i], sum+nums[i]);
            ans = max(sum, ans);
        }
        return ans;
    }
};