class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        for(auto it : nums){
            mp[it]++;

        }
        int ans = 0;
        for(auto it : mp){
           auto newpair = (it.second ) * ( it.second - 1 ) / 2;
           ans += newpair;
        }
        return ans;
    }
};