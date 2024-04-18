class Solution {
public:
    int islandPerimeter(vector<vector<int>>& nums) {
        int cnt = 0;
        int m = nums.size();
        int n = nums[0].size();
        
        for(int i = 0; i< m; i++){
            for(int j = 0; j< n; j++){
                if(nums[i][j] == 1){
                    cnt += 4;
                
                if(i > 0 && nums[i-1][j] == 1){ // up 
                    cnt--;
                }
                if( j > 0 && nums[i][j-1] == 1){ // left
                    cnt--;
                }
                 if(i < m - 1 && nums[i+1][j] == 1){ // down
                    cnt--;
                }
                if(j < n -1 && nums[i][j+1] == 1){ // right
                    cnt--;
                }
              }   
            }
            
        }
        return cnt;
        
    }
};