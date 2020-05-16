import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the minimumNumber function below.
    static int minimumNumber(int n, String password) 
    {
        // Return the minimum number of characters to make the password strong
        int count=4;
        Pattern uppercase = Pattern.compile("[A-Z]");
        Pattern lowercase = Pattern.compile("[a-z]");
        Pattern digit = Pattern.compile("[0-9]");
        Pattern special =Pattern.compile("[!@#$%^&*()-+]");

         if(uppercase.matcher(password).find())
        {
          count--;

        }

         if(lowercase.matcher(password).find())
         {
           count--;

         }

         if(digit.matcher(password).find())
          {
         count--;
          }

         if(special.matcher(password).find())
         {
         count--;

          }



int result=Math.max(count,6-n);

return result;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String password = scanner.nextLine();

        int answer = minimumNumber(n, password);

        bufferedWriter.write(String.valueOf(answer));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

