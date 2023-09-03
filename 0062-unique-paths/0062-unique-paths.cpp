class Solution {
public:
    int helper(int x, int y, int m, int n, vector<vector<int>> &dp)
    {
        if(x<0 || x>=m || y<0 || y>=n)
        return 0;

        if(x==m-1 && y==n-1)
        return 1;

        if(dp[x][y]!=-1)
        return dp[x][y];

        //move down or right
        int ans=helper(x, y+1, m, n, dp) + helper(x+1, y, m, n, dp);
        return dp[x][y]=ans;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return helper(0, 0, m, n, dp);
    }
};