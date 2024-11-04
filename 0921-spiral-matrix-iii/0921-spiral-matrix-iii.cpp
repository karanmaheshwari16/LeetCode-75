class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        vector<vector<int>> dir = {{0,1} , {1,0} , {0,-1} , {-1,0}};

        int steps = 1;
        int direction = 0;

        while(ans.size() < rows*cols) { // while loop to traverse all the possible cells
            for(int i=0 ; i<2 ; i++) {
                
                for(int j=0 ; j<steps ; j++) {
                    if(rStart >= 0 && cStart >= 0 && rStart < rows && cStart < cols) {
                        ans.push_back({rStart, cStart});
                    }   
                    
                    rStart += dir[direction][0];
                    cStart += dir[direction][1];
                }

                direction = (direction + 1) % 4;

            }
            steps++;
        }

        return ans;
    }
};