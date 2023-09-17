class Solution {
    int shortestPathLengthHelp(int cur, int vis, vector<vector<int>> &dp, vector<vector<int>> &dist, vector<vector<int>>& adj ){
        int n = adj.size(); 
        if( vis == (1<<n) - 1  ) return 0;
        if( dp[cur][vis] != -1) return dp[cur][vis];

        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            if( (vis&(1<<i)) == 0 ){
                // node i not visited
                mini = min(mini, dist[cur][i] + shortestPathLengthHelp(i, vis | (1<<cur), dp, dist, adj) );
            }
        }
        return dp[cur][vis] = mini;
    }


public:
    int shortestPathLength(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<vector<int>> dist(n, vector<int>(n, 1e9));

        for(int src=0; src<n; src++){
            queue<int> q;
            q.push(src);
            dist[src][src] = 0;

            while( q.size() ){
                int node = q.front();
                q.pop();

                for(auto nbr : adj[node]){
                    if( dist[src][node] + 1 < dist[src][nbr] ){
                        dist[src][nbr] = dist[src][node] + 1;
                        q.push(nbr);
                    }
                }
            }
        }

        int allVis = (1<<n) - 1, mini = INT_MAX;

        for(int src = 0; src<n; src++){
            vector<vector<int>> dp(n+1, vector<int>(allVis, -1));
            mini = min(mini, shortestPathLengthHelp(src, 1<<src, dp, dist, adj));
        }
        return mini;
    }
};