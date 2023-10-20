class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
          long long ans = 0;
        int maxi = max(nums[0], nums[1]); // maxi on the left of j
        int maxDiff = nums[0] - nums[1];
        for(int k = 2; k < nums.size(); k++){
            long long val = (long long)maxDiff * nums[k];
            if(val > ans)
                ans = val;
            // update maxDiff and maxi for the next iteration
            maxDiff = max(maxDiff, maxi - nums[k]);
            maxi = max(maxi, nums[k]);
        }
        return ans;
    }
};