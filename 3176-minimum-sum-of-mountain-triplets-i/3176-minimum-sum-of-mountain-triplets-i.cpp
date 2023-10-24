class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int n = nums.size();
        int sum  = INT_MAX;
        bool flag = 0;
         for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if( nums[i] < nums[j] && nums[k] < nums[j]){
                    flag = 1;
                   int curr = nums[i]+nums[j]+ nums[k];
                    sum = min(sum, curr);
                }
           }
        }
    }
    if(!flag) return -1;
    return sum;
    }
};