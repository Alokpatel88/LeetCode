/*
        1
        1 1
        1 2 1
        1 3 3 1
        1 4 6 4 1
*/
class Solution {
public:
     
     vector<int> genrateCol(int n){
        //  n = n + 1;
         vector<int> tmp;
         tmp.push_back(1);
         int num  = 1;
         for(int i = 1 ; i < n ; i++){
             num = num * (n - i);
             num = num / i;
             tmp.push_back(num);
         }
         return tmp;

     }
   
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;

        for(int i = 1 ; i <= n ; i++){  

           ans.push_back( genrateCol(i) );

        }

        return ans;
        
    }
};