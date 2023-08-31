class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        if(n == 1) {
            if(ranges[0] == 0) return -1;
            return 1; 
        }

        stack<pair<int, int>> st; 

        int m = ranges.size();

        for(int i = 0; i < m; i++) {
            if(ranges[i] == 0) continue;
            if(st.size() == 0) {
                int l = max(0, i - ranges[i]);
                int r = min(n, i + ranges[i]);
                st.push({l, r});
            } else {
                while(!st.empty()) {
                    auto front = st.top();
                    int l1 = front.first;
                    int r1 = front.second;
                    int l2 = max(0, i - ranges[i]);
                    int r2 = min(n, i + ranges[i]); 

                    if(l1 >= l2 and r1 <= r2) {
                        st.pop();
                    } else {
                        break;
                    }
                    
                }
                if(st.size()) {

                    auto front = st.top();
                    int l1 = front.first;
                    int r1 = front.second;

                    int l2 = max(0, i - ranges[i]);
                    int r2 = min(n, i + ranges[i]);

                 
                    if(l2 > r1) {
                        // cout<<l2<<" "<<r2<<endl;
                        st.push({l2, r2});
                    } else if (!(l2 >= l1 and r2 <= r1)) {
                        int l = max(l, r1);
                        int r = r2; 
                        st.push({l, r}); 
                    }

                } else {
                    int l = max(0, i - ranges[i]);
                    int r = min(n, i + ranges[i]);
                    st.push({l, r});
                }
            }
        }

        if(st.size() == 0) return -1;

        vector<int> dp(n+2, 0);
        int ans = st.size();
        while(!st.empty()) {
            auto front = st.top();
            st.pop();

            int l = front.first;
            int r = front.second; 
            dp[l]++;
            dp[r]--; 
        }   

        for(int i = 1; i <= n; i++) dp[i] += dp[i-1]; 

        for(int i = 0; i < n; i++) {
            if(dp[i] <= 0) return -1;
        } 
        return ans;
    }
};