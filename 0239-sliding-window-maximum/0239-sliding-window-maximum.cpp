class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> ans;
        
        int l = 0; 
        int r = 0;

        priority_queue<pair<int, int>> maxiHeap;

        while(r < nums.size()) {
            
            maxiHeap.push({nums[r], r});

            if(maxiHeap.size() >= k) {
                while(maxiHeap.top().second < l) maxiHeap.pop();
                ans.push_back(maxiHeap.top().first);
                l++;
            }
            
            r++;
        }

        return ans;
    }
};