class Solution {
public:
    vector<vector<int>> generate(int n) {
        /*
        1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
        */
        vector<vector<int>> ans;
        ans.push_back(vector<int> (1, 1));
        for(int i = 1; i < n; i++) {
            vector<int> row(i + 1, 1);
            for(int j = 1; j < i; j++) {
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(row);
        }
        return ans;
    }
};