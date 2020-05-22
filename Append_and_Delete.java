import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the appendAndDelete function below.
    static String appendAndDelete(char[] s,char[] t,int k) 
    {
        if (s.length+t.length<k) 
        {
            return "Yes";
        }
        int i=-1;
        while(i++< Math.min(s.length, t.length)-1) 
        {
            if (s[i]!=t[i]) 
            {
                break;
            }
        }

        if (i ==s.length && s.length==t.length) 
        {
            
            return ((k&1)==1) ? "Yes" : "No";
        }

        
        k=k-(s.length-i)-(t.length-i);

        return (k<0 || (k&1)==1) ? "No" : "Yes";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String t = scanner.nextLine();

        int k = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String result = appendAndDelete(s.toCharArray(), t.toCharArray(), k);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
