class Solution {
public:
    void dfs(int node,int dest,vector<vector<int>>&res,vector<int>&ans,unordered_map<int,bool>&visited,vector<vector<int>>& graph)
    {
        visited[node]=true;
        ans.push_back(node);
        if(node == dest)
        {
            res.push_back(ans);
            return;
        }

        for(auto nbr : graph[node])
        {
            if(!visited[nbr])
            {
                dfs(nbr,dest,res,ans,visited,graph);
                ans.pop_back();
                visited[nbr]=false;
            }
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        unordered_map<int,list<int>>adj;
        int n = graph.size();
        unordered_map<int,bool>visited;
        vector<vector<int>>res;
        vector<int>ans;
        int dest = n-1;
        dfs(0,dest,res,ans,visited,graph);
        return res;
    }
};