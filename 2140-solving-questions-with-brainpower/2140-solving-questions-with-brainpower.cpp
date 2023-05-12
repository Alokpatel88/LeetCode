class Solution {
    long long func(int idx, vector<vector<int>>& questions,int n,vector<long long> &dp){
            if(idx>=n) return 0;
            if(dp[idx]!=-1) return dp[idx];
        long long take=0,not_take=0 ;
            //take
            take=questions[idx][0]+func(idx+questions[idx][1]+1,questions,n,dp);

            //not take 
            not_take=func(idx+1,questions,n,dp);

            return dp[idx]= max(take,not_take);
    }
public:
    long long mostPoints(vector<vector<int>>& questions) {
         vector<long long> dp(questions.size()+1,-1);
        return func(0,questions,questions.size(),dp);
    }
};