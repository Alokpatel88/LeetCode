class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int time = 0;
        unordered_map<string,int> mpp, vis;
        for(auto s : deadends) {
            mpp[s]++;
        }
        
        queue<string> q;
        q.push("0000"); 
        
        while(!q.empty()) {
            int size = q.size(); 
            while(size--) {
                auto curr = q.front();
                q.pop();
                
                if(curr == target) return time;
                if(mpp[curr] > 0 || vis[curr] > 0) continue;
                vis[curr]++; 
                for(int i=0; i<4; i++) {
                    string str = curr;
                    curr[i] = (str[i] == '9') ? '0' : str[i] + 1; 
                    q.push(curr);
                     curr[i] = (str[i] == '0') ? '9' : str[i] - 1; 
                    q.push(curr);
                 curr = str; 
                 }
             }
          time++; 
         }
     return -1;
    }
};