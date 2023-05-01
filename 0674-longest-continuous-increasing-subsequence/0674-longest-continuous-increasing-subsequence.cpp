class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int cnt=1;
        int maxi=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]>nums[i]){
                cnt++;
            }
            maxi=max(maxi,cnt);
            if(nums[i+1]<=nums[i]){
                cnt=1;
            }
        }
        return maxi;
    }
};