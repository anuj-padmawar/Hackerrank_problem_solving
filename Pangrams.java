import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the pangrams function below.
    static String pangrams(String str) {
        boolean[] mark = new boolean[26]; 
  
          int index=0; 
  
        for (int i=0;i<str.length();i++) 
        { 
            
            if ('A'<=str.charAt(i) && str.charAt(i)<='Z') 
            {
                index=str.charAt(i)-'A'; 
            }
    
            else if ('a'<=str.charAt(i) && str.charAt(i)<='z') 
            {
                index=str.charAt(i)-'a'; 
            }
  
            else
                continue; 
            mark[index]=true; 
        } 
  
        for (int i =0;i<=25;i++) 
        {
            if (mark[i]==false) 
            {
                return "not pangram";
            }
        }
                 
 return "pangram";


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String result = pangrams(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

