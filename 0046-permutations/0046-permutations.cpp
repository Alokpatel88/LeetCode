class Solution {
    private:
    void genrate(vector<int>nums, vector<vector<int>> &ans, int i){
        if(i >= nums.size()){
            ans.push_back(nums);
        }
        for(int j = i; j< nums.size(); j++){
            swap(nums[i], nums[j]);
        
        genrate(nums, ans, i+1 );
        swap(nums[i], nums[j]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        genrate(nums, ans, 0);
        return ans;
    }
};