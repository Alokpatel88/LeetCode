//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &m)
    {
        // code here 
        int row=m.size();
        int col=m[0].size();
        int arr_row[row] ; fill(arr_row,arr_row+row,false);
        
        int arr_col[col];fill(arr_col,arr_col+row,false);
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(m[i][j]==1){
                    arr_row[i]=true;
                    arr_col[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            if(arr_row[i]){
                for(int j=0;j<col;j++){
                    m[i][j]=1;
                }
            }
        }
            for(int i=0;i<col;i++){
                 if(arr_col[i]==1){
                for(int j=0;j<row;j++){
                m[j][i]=1;
            }
        }
    }    
        
    }
};
// Boolean Matrix: https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1#



//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends