class Solution {
public:
    map<int, vector<int>> dependencies;

    int computeFinish(int node, vector<int>& dep, vector<int>& time, vector<int>& finishTime){
        if(finishTime[node] != -1) return finishTime[node];

        int delay = 0;
        for(int de: dep){
            delay = max(delay, computeFinish(de, dependencies[de], time, finishTime));
        }
        finishTime[node] = delay + time[node - 1];
        return finishTime[node];
    }

    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> finishTime(n + 1, -1);

        for(const auto& relation: relations){
            dependencies[relation[1]].push_back(relation[0]);
        }

        int result = 0;
        for(int i = 1; i <= time.size(); i++){
            finishTime[i] = computeFinish(i, dependencies[i], time, finishTime);
            result = max(result, finishTime[i]);
        }

        return result;
    }
};