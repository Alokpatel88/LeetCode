class Solution {
    public boolean isPalindrome(String s) {
        StringBuffer sb = new StringBuffer();
        for(int i = 0; i< s.length(); i++){
            // System.out.println(Character.isLetterOrDigit(ch));
            if(Character.isLetterOrDigit(s.charAt(i))){
                sb.append(s.charAt(i));
            }
        }
        StringBuffer revSb = new StringBuffer(sb);
        revSb.reverse();
        System.out.println("sb - " + sb + " revSb - " + revSb);
        return sb.toString().toLowerCase().equals(revSb.toString().toLowerCase());

    }
}