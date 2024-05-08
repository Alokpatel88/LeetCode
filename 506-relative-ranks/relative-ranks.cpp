class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<pair<int,int>> v;
        for(int i  = 0 ;i< nums.size(); i++){
            v.push_back({nums[i], i});

        }
        sort(v.rbegin(), v.rend());
        vector<string> ans(nums.size());
        for(int i = 0; i< v.size(); i++){
            if(i == 0) 
            ans[v[0].second] = "Gold Medal";
           else if(i == 1) 
           ans[v[1].second] = "Silver Medal";
           else if(i == 2)
            ans[v[2].second] = "Bronze Medal";
           else 
           ans[v[i].second] = to_string(i + 1);

        }
        return ans;
        

    }
};