class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        ios::sync_with_stdio(false);

        int count = 0;

        for(int i=0 ; i<flowerbed.size() ; i++) {
            if(flowerbed[i] == 0) {
                bool checkleft = i==0 || flowerbed[i-1]==0;
                bool checkright = i==flowerbed.size()-1 || flowerbed[i+1]==0;

                if(checkleft and checkright) {
                    count++;
                    flowerbed[i] = 1;
                    if(count == n) return true;
                }
            }
        }
        return count>=n;
    }
};