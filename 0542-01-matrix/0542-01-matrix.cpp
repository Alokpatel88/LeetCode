class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        queue<pair<int, int>> q;
        vector<vector<int>> result(m, vector<int>(n, INT_MAX));
        
        // Initialize the queue with cells containing 0
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.push({i, j});
                    result[i][j] = 0;
                }
            }
        }
        
        // Four possible directions: up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        while (!q.empty()) {
            auto curr = q.front();
            q.pop();
            
            for (auto dir : directions) {
                int newRow = curr.first + dir.first;
                int newCol = curr.second + dir.second;
                
                if (newRow >= 0 && newRow < m && newCol >= 0 && newCol < n &&
                    result[newRow][newCol] > result[curr.first][curr.second] + 1) {
                    result[newRow][newCol] = result[curr.first][curr.second] + 1;
                    q.push({newRow, newCol});
                }
            }
        }
        
        return result;
    }
};