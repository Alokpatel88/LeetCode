class Solution {
public:
    int help(vector<int>& coins , int i , int amount , vector<vector<int>>& dp){
        if(dp[i][amount] != -1)return dp[i][amount];
        if(i == 0)return amount%coins[i] == 0;
        int b  = help(coins , i-1  , amount , dp);
        int a = 0;
        if(amount >= coins[i]){
            a = help(coins , i , amount - coins[i] , dp);
        }
        return dp[i][amount] = a+b;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp (coins.size() , vector<int>(amount+1 , -1));
        return help(coins , coins.size()-1 , amount, dp);    
    }
};