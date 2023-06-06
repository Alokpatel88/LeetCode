class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff=nums[1]-nums[0];
        for(int i=1;i<nums.size()-1;i++){
            int curr_diff=nums[i+1]-nums[i];
            if(diff!=curr_diff){
                return false;
            }
        }
        return true;
    }
};