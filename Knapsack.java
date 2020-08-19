import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the unboundedKnapsack function below.
    static int unboundedKnapsack(int k, int[] arr) {

        int dp[]=new int[k + 1]; 
        int n=arr.length;
        int wt[]=new int[arr.length];
        for (int i=0; i<arr.length; i++) 
        {
            wt[i]=arr[i]; 
        }
          
        // Fill dp[] using above recursive formula 
        for(int i=0;i<=k;i++)
        { 
            for(int j=0;j<n;j++)
            { 
                if(wt[j]<=i)
                { 
                    dp[i]=Math.max(dp[i], dp[i - wt[j]] +  arr[j]); 
                } 
            } 
        } 
        return dp[k]; 


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
       for(int x=0;x<t;x++)
       {

        String[] nk = scanner.nextLine().split(" ");

        int n = Integer.parseInt(nk[0]);

        int k = Integer.parseInt(nk[1]);

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }
    
        int result = unboundedKnapsack(k, arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();
        
        }

        bufferedWriter.close();

        scanner.close();
    }
}

