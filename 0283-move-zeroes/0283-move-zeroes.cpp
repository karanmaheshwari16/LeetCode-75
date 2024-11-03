class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios::sync_with_stdio(false);
        int n = nums.size();
        int j=0; 
        for(int i=0 ; i<n ; i++) {
            if(nums[i] != 0) {
                if(i != j) {
                    swap(nums[i], nums[j]);
                }
                j++;
            }
        }
    }
};