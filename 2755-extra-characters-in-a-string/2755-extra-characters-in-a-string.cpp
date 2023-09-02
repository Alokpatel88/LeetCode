class Solution {
public:
    int solve(string s,int idx,vector<string>& d,vector<int> &dp)
    {
        if(idx>=s.size())
        return 0;
        if(dp[idx]!=-1)
        return dp[idx];
        string t="";
        int ans=s.size();
        for(int i=idx;i<s.size();i++)
        {
            t+=s[i];
            int e=t.size();
            if(find(d.begin(),d.end(),t)!=d.end())
            e=0;
            int n=solve(s,i+1,d,dp);
            ans=min(ans,n+e);
        }
        return dp[idx]=ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        vector<int> dp(s.size()+1,-1);
        return solve(s,0,dictionary,dp);
    }
};