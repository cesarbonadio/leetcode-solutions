public class Solution {
    public void rotate(int[][] matrix) {

        int filas = matrix.length;
        int columnas = matrix.length;
       
   
        for (int i = 0; i < filas / 2; i++) {
            for (int j = 0; j < columnas; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[filas-i-1][j];
                matrix[columnas-i-1][j] = temp;
            }
        }
        
        for (int i = 0; i < filas; i++) {
            for (int j = i; j < columnas; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
}