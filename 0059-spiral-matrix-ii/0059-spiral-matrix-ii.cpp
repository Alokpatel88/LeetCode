class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector <vector<int>>matrix(n,vector<int>(n,1));
        int r=n;
        int c=n;
        int idx=1;
         int left=0;
        int right=c-1;
        int top=0;
        int bottom=r-1;
        
        vector<int>ans;
        
    while(top<=bottom  &&  left<=right){
        
        for(int i=left;i<=right;i++){
            matrix[top][i]=idx;
           idx ++;
        }
            top++;
        
        for(int i=top;i<=bottom;i++){
           matrix[i][right]=idx;
          idx ++;
        }
             right--;
        
        
            for(int i=right;i>=left;i--){
          
                matrix[bottom][i]=idx;
                 idx ++;
                       
            }
                 bottom--;
                 
      
            for(int i=bottom;i>=top;i--){
                matrix[i][left]=idx;
                idx ++;
            }
                 left++;
        
    }
    return matrix;
    }
};