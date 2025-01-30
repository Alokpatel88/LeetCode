class Solution {
public:
    vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> generate(int n) {
    vector<vector<int>> ans;
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;

// Brute Force -> 1st approch

    // int solvenCr(int row,int col ){
    //     row = row -1; col = col - 1;
    //     int upper = 1;
    //     int lower = 1, lower2 = 1;
    //     for(int i = 1; i<= row; i++){
    //         upper *= i;
    //     }
    //      for(int i = 1; i<= col; i++){
    //         lower *= i;
    //     }
    //      for(int i = 1; i<= row - col; i++){
    //         lower2 *= i;
    //     }
    //     int finalVal = upper/(lower * lower2);
    //     return finalVal;
    // }

    // vector<vector<int>> generate(int numRows) {
    //     vector<vector<int>> ans;
    //     for(int row = 1; row <= numRows;  row++){
    //         vector<int> temp;
    //         for(int col = 1; col <= row; col++){
    //            temp.push_back(solvenCr(row,col));
    //         }
    //          ans.push_back(temp);

    //     }
    //     return ans;
    }
};