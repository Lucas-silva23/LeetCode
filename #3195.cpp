class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        
        int colsize = grid[0].size();
        int rowsize = grid.size();
        int xmin = INT_MAX;
        int ymin = INT_MAX;
        int xmax = 0;
        int ymax = 0;

        for(int i=0;i<rowsize;i++){
            for(int j=0;j<colsize;j++){
                if(grid[i][j] == 1){
                    xmin = min(xmin, j);
                    xmax = max(xmax, j);
                    ymin = min(ymin, i);
                    ymax = max(ymax, i);
                }
            }
        }

        return (xmax - xmin + 1) * (ymax - ymin + 1);
        
    }
};