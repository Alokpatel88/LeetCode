class Solution {
public:
int binarySearch(vector<vector<int>>& matrix,int i, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (matrix[i][m] == x)
            return m;
        if (matrix[i][m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            int k=binarySearch(matrix,i,0, matrix[i].size()-1, target);
            if(k!=-1)
            {
                return true;
            }
        }return false;
    }
};