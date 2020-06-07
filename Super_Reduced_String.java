import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {

    // Complete the superReducedString function below.
    static String superReducedString(String s) {
        if(s.length()==0)
{
    return "Empty String";
}
        if(s.length()==1) 
        {
            return s;
        } 
for(int i=1;i<s.length();i++)
{ 
    if(s.charAt(i)==s.charAt(i-1))
    { 
      return superReducedString(s.substring(0, i-1) + s.substring(i+1)); 
    }
}
 return s; 

    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = superReducedString(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}

