class Solution {
    public boolean containsDuplicate(int[] nums) {
        // hashMap
        HashMap<Integer, Integer> mp = new HashMap<>();
        for(int i = 0; i< nums.length; i++){
            if(mp.containsKey(nums[i])){
                return true;
            }
             mp.put(nums[i],i);
        }
        return false;
        
        // n(log(n))
        // Arrays.sort(nums);
        // for(int i = 0; i< nums.length-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;
    }
}