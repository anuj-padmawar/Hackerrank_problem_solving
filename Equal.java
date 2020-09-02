import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the equal function below.
    static int equal(int[] arr) {
    Arrays.sort(arr);
    int min=arr[0];
    int ans=-1;
    int x;
    int operation;
    int[][] results=new int[arr.length][3];

    for (int j=0;j<3;j++)
    {
        x=0;
        for(int i=0;i<arr.length;i++)
        {
            results[i][j]=0;
            operation=(arr[i]-min)+j;

            while (true) 
            {
                if(operation>=5) 
                {
                    operation-=5;
                }
                else if(operation>=2) 
                {
                    operation -= 2;
                }
                else if(operation>=1) 
                {
                    operation-=1;
                } 
                else 
                {
                    break;
                }
                results[i][j]++;
            }

            x+=results[i][j];
        }

        if( ans>x || ans<0 ) 
        {
            ans=x;
        }
    }

    return ans;


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int[] arr = new int[n];

            String[] arrItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int i = 0; i < n; i++) {
                int arrItem = Integer.parseInt(arrItems[i]);
                arr[i] = arrItem;
            }

            int result = equal(arr);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

