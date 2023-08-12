class Solution {
public:
    
    int uniquePathHelper(int i, int j ,vector<vector<int>> obstacleGrid, int dp[][101]) {
        
        if(i > obstacleGrid.size()-1 || j > obstacleGrid[0].size()-1 || obstacleGrid[i][j] == 1) {
            return 0;
        }
        
        else if(dp[i][j] != -1)
            return dp[i][j];
        else if(i == obstacleGrid.size()-1 && j == obstacleGrid[0].size()-1)
            return 1;
        
        return dp[i][j] =   uniquePathHelper(i+1, j, obstacleGrid, dp) +  uniquePathHelper(i, j+1, obstacleGrid, dp);
     }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int dp[101][101] = {{0}};
        
        for(int i = 0 ; i < 101 ; i++) {
            for(int j = 0 ; j< 101 ; j++)
                dp[i][j]  =-1;
        }
       return uniquePathHelper(0, 0, obstacleGrid, dp);
    }
};