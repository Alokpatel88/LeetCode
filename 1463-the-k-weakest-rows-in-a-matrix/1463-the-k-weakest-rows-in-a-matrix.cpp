class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<pair<int, int>> strength; // (number of soldiers, row index)
        
        for (int i = 0; i < m; ++i) {
            int count = 0;
            for (int j = 0; j < n && mat[i][j] == 1; ++j) {
                count++;
            }
            strength.push_back({count, i});
        }
        
        sort(strength.begin(), strength.end(), [&](pair<int, int>& a, pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second < b.second;
            }
            return a.first < b.first;
        });
        
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(strength[i].second);
        }
        
        return result;
    }
};