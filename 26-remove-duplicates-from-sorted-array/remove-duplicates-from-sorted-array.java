class Solution {
    public int removeDuplicates(int[] nums) {
        HashSet<Integer> st = new LinkedHashSet<>();
        for(int i = 0; i< nums.length; i++){
            st.add(nums[i]);
        }
        int i = 0;
        for(int val : st){
            nums[i++] = val;
        }
        return st.size();
    }
}