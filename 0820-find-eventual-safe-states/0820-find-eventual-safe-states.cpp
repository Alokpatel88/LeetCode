class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> indegree(V, 0);
        vector<int> revadj[V];
        vector<int> ans;
        
    for (int i = 0; i < V; i++) {
        for (auto it : adj[i]) {
            // i-> it 
        // change it - > i
            revadj[it].push_back(i);
            indegree[i]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) {
            q.push(i);
            ans.push_back(i);
        }
    }

    int cnt = 0;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cnt++;
        for (auto it : revadj[node]) {
            indegree[it]--;
            if (indegree[it] == 0) {
                ans.push_back(it);
                q.push(it);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;

    }
};