class Solution {
    public String longestCommonPrefix(String[] strs) {
        // sort the array
        // take first and last indx string
        // takse ans = "" str var
        // loop through last string and commpair char by char maches indx char add in that(ans)
        // return ans
        Arrays.sort(strs);
        StringBuffer sb = new StringBuffer();
        String start = strs[0];
        String end = strs[strs.length -1];

        for(int i = 0; i< start.length() && i < end.length(); i++ ){
            if(start.charAt(i) == end.charAt(i)){
                sb.append(end.charAt(i));
            } else{
                break;
            }

        }
        return sb.toString();
    }
}
