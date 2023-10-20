class Solution {
    private:
    void genrate(vector<int>nums, vector<vector<int>> &ans, int i){
        if(i >= nums.size()){
            return ;
        }
        for(int j = i; j< nums.size(); j++){
            ans.push_back(nums);
            swap(nums[i], nums[j]);
        
            genrate(nums, ans, i+1 );
            swap(nums[i], nums[j]);
        }

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans,ans1;
        genrate(nums, ans, 0);
        set<vector<int>> st;
        for(auto it : ans){
            st.insert(it);
        }
        for(auto it : st){
            ans1.push_back(it);
        }
        return ans1;
    }
};