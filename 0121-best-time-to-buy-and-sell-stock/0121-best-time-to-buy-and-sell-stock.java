class Solution {
    public int maxProfit(int[] nums) {
        int minValue = Integer.MAX_VALUE;
        int maxProfit = 0;

        for(int i = 0; i< nums.length; i++){
            minValue = Integer.min(minValue, nums[i]);
            maxProfit = Integer.max(maxProfit, nums[i] - minValue);
        }
        return maxProfit;

        // TLE - O(n^2)
        // int max = 0;
        // for(int i = 0; i< nums.length-1; i++){
        //     for(int j = i+1; j< nums.length; j++){
        //         if(nums[j] - nums[i] > max){
        //             max = nums[j] - nums[i] ;
        //         }
        //     }
        // }
        // return max;
    }
}