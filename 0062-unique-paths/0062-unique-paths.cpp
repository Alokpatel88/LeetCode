class Solution {
public:
   int arr[101][101];
   int solve(int m,int n){
       if(m==0 and n==0 )
       return 1;
       else {
           if(m<0 || n<0)
           return 0;
       }
        if(arr[m][n]!=-1)
        return arr[m][n];

       int top=solve(m-1,n);
       int left=solve(m,n-1);

       return arr[m][n]=top+left;

   }

    int uniquePaths(int m, int n) {
        memset(arr,-1,sizeof(arr));
        
        return solve(m-1,n-1);
    }
};