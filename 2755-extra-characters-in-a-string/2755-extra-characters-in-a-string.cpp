class Solution 
{
public:
    int minExtraChar(string s, vector<string>& dict)
    {
        unordered_set<string>uset; 

        for(auto str:dict)
         uset.insert(str); 

        int n = s.length();
        vector<int>dp(n,INT_MAX);

        for(int i=0;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                string str = s.substr(j,i-j+1);
                if(uset.find(str)!=uset.end())
                    dp[i] = (j==0)? 0 : min(dp[i],dp[j-1]);
            }
            dp[i] = (i==0) ? min(dp[i],1) : min(dp[i],dp[i-1]+1);
        }
        return dp[n-1]; 
    }
};