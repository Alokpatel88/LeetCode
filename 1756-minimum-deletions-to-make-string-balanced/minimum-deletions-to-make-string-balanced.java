class Solution {

    public int minimumDeletions(String s) {
        int length = s.length();
        int leftACount = 0;
        int rightBCount = 0;
        for (int index = 0; index < length; index++) {
            if (s.charAt(index) == 'b') {
                rightBCount++;
            }
        }

        int minimumDeletions = Integer.MAX_VALUE;
        for (int index = 0; index <= length; index++) {
            int currentDeletions = length - leftACount - rightBCount;
            minimumDeletions = Math.min(minimumDeletions, currentDeletions);
            if (index < length) {
                char currentChar = s.charAt(index);
                if (currentChar == 'a') {
                    leftACount++;
                } else {
                    rightBCount--;
                }
            }
        }
        return minimumDeletions;
    }
}
