class Solution {
public:

    bool goFindTopo(vector<int> adj[], vector<int> &topoSort, vector<int> &deg) {
        queue<int> q;
        for(int i=0;i<deg.size();i++) {
            if(deg[i] == 0) {
                q.push(i);
            }
        }
        while(!q.empty()) {
            int curr = q.front();
            q.pop();
            topoSort.push_back(curr);
            for(auto &v:adj[curr]) {
                deg[v]--;
                if(deg[v] == 0) {
                    q.push(v);
                }
            }
        }
        return topoSort.size() == deg.size();
    }

    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {
        for(int i=0;i<n;i++) {
            if(group[i] == -1) {
                group[i]= m++;
            }
        }
        vector<int> adjGroup[m], adjItem[n];
        vector<int> degGroup(m, 0), degItem(n, 0); 
        for(int i=0;i<n;i++) {
            for(auto &item : beforeItems[i]) {
                adjItem[item].push_back(i);
                degItem[i]++;
                if(group[i] != group[item]) {
                    adjGroup[group[item]].push_back(group[i]);
                    degGroup[group[i]]++;
                }
            }
        }
        vector<int> orderItems, orderGroups;
        bool isValidItems = goFindTopo(adjItem, orderItems, degItem);
        bool isValidGroup = goFindTopo(adjGroup, orderGroups, degGroup);
        if(!isValidItems || !isValidGroup) {
            return {};
        }
        unordered_map<int, vector<int>> mp;
        for(auto &it:orderItems) {
            mp[group[it]].push_back(it);
        }
        vector<int> ans;
        for(auto &it:orderGroups) {
            for(auto &v:mp[it]) {
                ans.push_back(v);
            }
        }
        return ans;
    }
};