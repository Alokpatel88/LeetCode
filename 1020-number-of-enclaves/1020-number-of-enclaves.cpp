class Solution {
private:
    vector<vector<bool>> vis;
    vector<pair<int,int>> movements{{0,-1},{0,1},{1,0},{-1,0}};
    int n, m, enclaves;
    bool isValid(int x,int y){
        return x>=0 && x<n && y>=0 && y<m;
    }
    void dfs(int x,int y,vector<vector<int>>& grid){
        vis[x][y] = true;
        for(auto &movement: movements){
            int i = x + movement.first, j = y + movement.second;
            if(isValid(i,j) && !vis[i][j] && grid[i][j]){
                dfs(i,j,grid);
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size(), enclaves = 0;
        vis.resize(n,vector<bool>(m,false));
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(i == 0 || i == n-1 || j == 0 || j == m-1){
                    if(grid[i][j] && !vis[i][j]){
                        dfs(i,j,grid);
                    }
                }
            }
        }
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(grid[i][j] && !vis[i][j]) enclaves++;
            }
        }
        return enclaves;
    }
};