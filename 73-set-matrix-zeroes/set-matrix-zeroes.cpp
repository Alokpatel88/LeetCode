class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        bool rowZero = false;
          bool colZero = false;

            for(int i = 0; i< mat.size(); i++){
                if(mat[i][0] == 0)
                 rowZero = true;
             }
            for(int i = 0; i< mat[0].size(); i++){
                if(mat[0][i] == 0)
                 colZero = true;
             }

        for(int i = 1; i< mat.size() ; i++){
            for(int j = 1; j<mat[0].size() ; j++){
                if(mat[i][j] == 0){
                mat[0][j] = 0;
                mat[i][0] = 0;
                }
            }
        }  

        for(int i = 1; i< mat.size(); i++){
            for(int j = 1; j<mat[0].size(); j++){
                if(mat[0][j] == 0 || mat[i][0] == 0){
                    mat[i][j] = 0;
                }

            }    
        }  

        if(rowZero){
            for(int i = 0; i< mat.size(); i++){
                mat[i][0] = 0;
            }
        }

         if(colZero){
            for(int i = 0; i< mat[0].size(); i++){
                mat[0][i] = 0;
            }
        }
    }
};