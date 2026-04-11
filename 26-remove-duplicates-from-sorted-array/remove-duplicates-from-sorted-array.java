class Solution {
    public int removeDuplicates(int[] nums) {
        // without space
        int size = nums.length-1;
        if(size == 0) return  1;
        int i = 0; 
        int j = 1;
        
        int cnt = 1;
        while(j <= size){
           if(nums[j] != nums[i]){
            cnt++;
            nums[i+1] = nums[j];
            i = i+1;
           } else{
            j++;
           }
        }
        return cnt;


        // with Extra Space

        // HashSet<Integer> st = new LinkedHashSet<>();
        // for(int i = 0; i< nums.length; i++){
        //     st.add(nums[i]);
        // }
        // int i = 0;
        // for(int val : st){
        //     nums[i++] = val;
        // }
        // return st.size();
    }
}