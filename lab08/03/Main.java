public class Main {
    public static void main(String[] args) {
        int[][] matrix = {
            {1, 2, 3},
            {4, 0, 6},
            {7, 8, 0}
        };

        int targetRow = -1;
        int targetCol = -1;

        search:
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                if (matrix[i][j] == 0) {
                    targetRow = i;
                    targetCol = j;
                    break search;
                }
            }
        }

        if (targetRow != -1) {
            System.out.println(targetRow + " " + targetCol);
        } else {
            System.out.println("not found");
        }
    }
}
