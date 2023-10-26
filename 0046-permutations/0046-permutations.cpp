class Solution {
    private:
    void solve(vector<int>nums, vector<vector<int>> &ans, int i ){
        //base case
        if(i>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for(int j = i ; j < nums.size(); j++){
            swap(nums[i], nums[j]);
            
            solve(nums, ans,  i+1);
            // backtracking
            swap(nums[i], nums[j]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i = 0;
        solve(nums, ans, i);
        return ans;
    }
};