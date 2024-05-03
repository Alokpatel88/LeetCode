class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]>=0) return -1;
        int l=0, r=nums.size()-1;
        while(l<r){
            if(abs(nums[l])==nums[r]){
                return nums[r];
            }
            else if(abs(nums[l])>nums[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return -1;
    }
};