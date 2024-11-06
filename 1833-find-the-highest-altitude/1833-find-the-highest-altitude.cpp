class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0, ans=0;
        int n=gain.size();

        for(auto x : gain) {
            sum += x;
            ans = max(ans, sum);
        }
        return ans;
    }
};

// class Solution {
// public:
//     int largestAltitude(vector<int>& gain) {
//         int n = gain.size();
//         vector<int> v(n+1,0);

//         for(int i=0 ; i<n ; i++) {
//             v[i+1] = v[i] + gain[i];
//         }
//         return *max_element(v.begin(), v.end());
//     }
// };