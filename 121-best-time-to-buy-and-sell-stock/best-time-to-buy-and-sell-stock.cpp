class Solution {
public:
    int maxProfit(vector<int>& nums) {
     int min_v = nums[0];
     int max_p = 0;

     for(int i = 1; i< nums.size(); i++){
        int curr_p = nums[i] - min_v;
        if(min_v > nums[i]){
            min_v = nums[i];
        }
        max_p = max(curr_p , max_p);
     }
     return max_p;
    }
};