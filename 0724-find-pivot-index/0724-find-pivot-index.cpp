class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

        int sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();

        int presum=0, sufsum=sum;
        for(int i=0 ; i<n ; i++) {
            sufsum -= nums[i];

            if(presum == sufsum) return i;

            presum += nums[i];
        }
        return -1;
    }
};