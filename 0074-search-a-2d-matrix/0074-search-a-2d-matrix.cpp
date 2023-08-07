class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int i=m.size();
        int j=m[0].size();
        int s=0;
        int e=(i*j)-1;

    while(s<=e){ 
        int mid=(s+(e-s)/2);
        if(m[mid/j][mid%j]==t){
            return 1;
        }
       if(m[mid/j][mid%j]<t){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
    }
    
};