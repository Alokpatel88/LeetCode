class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posCnt = 0;
        int negCnt = 1;
        vector<int> ans(nums.size());
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] < 0){
                ans[negCnt] = nums[i];
                negCnt += 2;
            }else{
                ans[posCnt] = nums[i];
                posCnt += 2;

            }
        }
        return ans;
    }
};