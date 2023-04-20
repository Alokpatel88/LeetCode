class Solution {
    private :
    void  dfs_search(vector<vector<char>>& matrix ,int i,int j,int row,int col){
         if(i<0||j<0||i>=row||j>=col || matrix[i][j]=='2' || matrix[i][j]  == '0'){
                return ;
          }
          matrix[i][j]='2';
           //check in upword diraction using dfs
            dfs_search(matrix,i,j-1,row,col);
            
            //check in down diraction using dfs
            dfs_search(matrix,i,j+1,row,col);
            
            //check in left diraction using dfs
            dfs_search(matrix,i-1,j,row,col);
            
            //check in right diraction using dfs
            dfs_search(matrix,i+1,j,row,col);
            
        }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int row=grid.size();
        int col=grid[0].size();
        if(row==0){
            return 0;
        }
        
        int land_count=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    land_count++;
                    dfs_search(grid,i,j,row,col);
                }
            }
        }
        return land_count;
    }
};