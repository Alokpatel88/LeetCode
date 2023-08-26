class Solution {
public:
    int solve(int i,int n,int v,vector<vector<int>> &pairs,vector<vector<int>> &dp)
    {
        if(i==n)
        return 0;
        if(dp[i][v]!=-1)
        return dp[i][v];
        int ans=solve(i+1,n,v,pairs,dp);
        if(pairs[i][0]>v)
        {
           ans=max(ans,1+solve(i+1,n,pairs[i][1],pairs,dp));
          
        }
       return dp[i][v]=ans;
        
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();
        sort(pairs.begin(),pairs.end());
        vector<vector<int>> dp(n,vector<int>(2010,-1));
        for(int i=0;i<n;i++)
        {
            pairs[i][0]+=1000;
            pairs[i][1]+=1000;
        }
        if(n==1)
        return 1;
        return solve(0,n,0,pairs,dp);
    }
};