class Solution {
    public void setZeroes(int[][] matrix) {
        boolean []rowArr = new boolean[matrix.length];
        boolean [] colArr = new boolean [matrix[0].length];

        for(int i = 0; i< matrix.length; i++){
            for(int j = 0; j< matrix[0].length; j++){
                if(matrix[i][j] == 0){
                    rowArr[i] = true;
                    colArr[j] = true;
                }
            }
        }
         for(int i = 0; i< matrix.length; i++){
            for(int j = 0; j< matrix[0].length; j++){
                if(rowArr[i] == true || colArr[j] == true){
                    // rowArr[i] = 1;
                    matrix[i][j] = 0;
                }
            }
        }
    }
}