
class Solution {
    vector<int> dp;
    private:
    
    int mincost(vector<int>& cost, int n){
        if( dp[n] != -1){
            return dp[n];
        }
        if(n <= 1){
            return dp[n] = 0;
        }
       
        if(n == 2){
            return dp[n] = min( cost[0], cost[1]);
        }
        return  dp[n] = min( mincost( cost , n -1) + cost[n-1] , mincost( cost, n-2) + cost[n-2]);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
         dp.resize(n + 1, -1); 
       return  mincost(cost, n);
    }
};