import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the flippingMatrix function below.
    public static int max(int a, int b, int c, int d) 
    {
        int max=a;
        if (b>max)
        {
            max = b;
        }
        if (c > max)
        {
        max=c;
        }
        if(d>max)
        {
        max = d;
        }

     return max;
}
    static int flippingMatrix(int[][] matrix) {
        int sum=0;
        int n=matrix.length;
    for(int i=0;i<n/2;i++)
    {
        for(int j=0;j<n/2;j++)
        {
        sum+=max(matrix[i][j],matrix[i][n-j-1],matrix[n-i-1][j],matrix[n-i-1][n-j-1]);
        } 
    }
    return sum;

    }


    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int[][] matrix = new int[2*n][2*n];

            for (int i = 0; i < 2*n; i++) {
                String[] matrixRowItems = scanner.nextLine().split(" ");
                scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

                for (int j = 0; j < 2*n; j++) {
                    int matrixItem = Integer.parseInt(matrixRowItems[j]);
                    matrix[i][j] = matrixItem;
                }
            }

            int result = flippingMatrix(matrix);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

