class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n = grid.size() -1 ;
     for(int i = 0; i<grid.size(); i++){
         int cnt = 0;
         for(int j = 0; j < grid.size(); j++){
             if(grid[i][j] == 1 && i != j){
                 cnt++;
             }
             if(cnt == n){
                 return i;
             }
         }
     }
        return -1;
    }
};