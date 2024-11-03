class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);

        int i =0;
        int j =k;

        double sum =0, avg = INT_MIN;
        for(int k=i ; k<j ; k++) sum += nums[k];
        avg = sum/k; 

        while(j < nums.size()) {
            sum -= nums[i];
            sum += nums[j];

            avg = max(avg, sum/k);
            i++; j++;
        }
        return avg;
    }
};