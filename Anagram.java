import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the anagram function below.
    static int anagram(String str) {
        int len = str.length(), count = 0;
            if (len%2!=0)
            {
                return -1;
            }
            String s1=str.substring(0,len/2);
            String s2=str.substring(len/2,len);
            char[] s1Chars=s1.toCharArray();
            for (char c : s1Chars)
            {
                int index=s2.indexOf(c);
                if (index==-1)
                {
                    count++;
                }
                 else 
                 {
                    s2 = s2.substring(0,index)+s2.substring(index+1);
                }
            }
            return count;


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String s = scanner.nextLine();

            int result = anagram(s);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

