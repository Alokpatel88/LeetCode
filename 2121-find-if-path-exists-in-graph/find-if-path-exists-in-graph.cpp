class Solution {
    #define pb push_back
private:
    bool bfs(vector<bool>& vis, unordered_map<int,list<int>>& adj, int src, int dest) {
        bool flag = false;
        queue<int> q;
        q.push(src);
        vis[src] = true;

        while(!q.empty()) {
            int front_node = q.front();
            q.pop();
            for(auto it : adj[front_node]) {
                if(!vis[it]) {
                    vis[it] = true;
                    q.push(it);
                }
                if(it == dest) {
                    flag = true;
                    break;
                }
            }
        }
        
        return flag;
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        unordered_map<int,list<int>> adj;
        for(int i=0; i<edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].pb(v);
            adj[v].pb(u);
        }

        vector<bool> vis(n,false);

        bool flag = bfs(vis, adj, source, destination);

        return flag;
    }
};