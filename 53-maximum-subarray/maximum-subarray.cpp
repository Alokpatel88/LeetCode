class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;;
        int currSum = 0;
        // if we need that subArry to
        vector<int> temp, ans;
        for(int i = 0; i< nums.size(); i++){
            currSum += nums[i];
            // temp.push_back(nums[i]);
            if(currSum > maxSum){
                maxSum = currSum;
                // ans = temp;
            } 
            if(currSum < 0){
                currSum = 0;
                temp.clear();
            }
            
        }
        //print SubArray
        //  for (int i = 0; i < ans.size(); i++) {
        //             cout << ans[i] << " ";
        //     }
        return maxSum;
    }
};