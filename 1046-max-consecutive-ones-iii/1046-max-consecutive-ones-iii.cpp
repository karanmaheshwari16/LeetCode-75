class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

        int i=0, j=0;
        int ans =0;

        int count = 0;
        
        while(j<nums.size()) {
            if(nums[j] == 0) count++;

            //method 1
            // while(count > k) {
            //     if(nums[i] == 0) count--;
            //     i++;
            // }
            // j++;

            // ans = max(ans, j-i);
        
        
            //method 2
            if(count > k) {
                if(nums[i] == 0) count--;
                i++;
            }
            if(count <= k) ans = max(ans , j-i+1);
            j++;
        }
        return ans;
    }
};