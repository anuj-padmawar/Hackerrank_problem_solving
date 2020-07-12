import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the commonChild function below.
    static int commonChild(String s1, String s2) {
        int m=s1.length();
        int n=s2.length();
        char[] X=s1.toCharArray();
        char[] Y=s2.toCharArray();
        int memo[]=new int[n+1];
        for(int i=1;i<=m;i++)
        {
            int prev=0;
            for(int j=1;j<=n;j++)
            {
                int temp=memo[j];
                if(X[i-1]==Y[j-1])
                {
                    memo[j]=prev+1;
                }
                else
                {
                    memo[j]=Math.max(memo[j],memo[j-1]);
                }
                prev=temp;
            }
        }
        return memo[n];



    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s1 = scanner.nextLine();

        String s2 = scanner.nextLine();

        int result = commonChild(s1, s2);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

